#include <db_include.h>
#include <db_utils.h>
#include <path_gps_lib.h>
#include "data_log.h"
#include "m56_can.h"

m56_m4n0_t m56_m440;
m56_m4n1_t m56_m441;
m56_m4n2_t m56_m442;
m56_m4n3_t m56_m443;
m56_m4n4_t m56_m444;
m56_m4n5_t m56_m445;
m56_m4n6_t m56_m446;
m56_m4n7_t m56_m447;
m56_m4n8_t m56_m448;

m56_m4n0_t m56_m490;
m56_m4n1_t m56_m491;
m56_m4n2_t m56_m492;
m56_m4n3_t m56_m493;
m56_m4n4_t m56_m494;
m56_m4n5_t m56_m495;
m56_m4n6_t m56_m496;
m56_m4n7_t m56_m497;
m56_m4n8_t m56_m498;

timestamp_t timestamp;



/** This array is used to specify the output format of the "[mnop]c" file.
 */
data_log_column_spec_t comm_specc[] = 
{
        {"HH:MM:SS.SSS ", &timestamp, BASE_TIMESTAMP, REPLAY_TIME},                            //###1
//m56_m440_t
        {"%u ",   &m56_m440.message_timeout_counter, BASE_INT, REPLAY_USE},	//###2
        {"%hhu ",   &m56_m440.msgcnt_id200, BASE_CHAR, REPLAY_USE},		//###3

        //Current speed received from n cars ahead
        {"%.1f ",   &m56_m440.host_rx_vsp_491, BASE_FLOAT, REPLAY_USE},	//###4

        //Target speed received from n cars ahead, distance not controlled
        {"%.1f ",   &m56_m440.host_rx_vspcomn_491, BASE_FLOAT, REPLAY_USE},	//###5

        //Target speed received from n cars ahead, distance controlled
        {"%.1f ",   &m56_m440.host_rx_acvcomo_491, BASE_FLOAT, REPLAY_USE},	//###6

        //Current acceleration received from n cars ahead
        {"%.2f ",   &m56_m440.host_rx_xg_491, BASE_FLOAT, REPLAY_USE},		//###7
//m56_m441_t
        {"%u ",   &m56_m441.message_timeout_counter, BASE_INT, REPLAY_USE},	//###8
        {"%hhu ",   &m56_m441.msgcnt_id201, BASE_CHAR, REPLAY_USE},		//###9

        //Distance received from n cars ahead
        {"%.1f ",   &m56_m441.host_rx_mdistance_491, BASE_FLOAT, REPLAY_USE},	//###10

        //Speed received from n cars ahead
        {"%.1f ",   &m56_m441.host_rx_vr_491, BASE_FLOAT, REPLAY_USE},		//###11

        //Brake switch status received from n cars ahead
        {"%hhu ",   &m56_m441.host_rx_brake_sw_491, BASE_CHAR, REPLAY_USE},	//###12

        //Accelerator switch status received from n cars ahead
        {"%hhu ",   &m56_m441.host_rx_accel_sw_491, BASE_CHAR, REPLAY_USE},	//###13

        //Set speed received from n cars ahead
        {"%.1f ",   &m56_m441.host_rx_setvsp_491, BASE_FLOAT, REPLAY_USE},	//###14
//m56_m442_t
        {"%u ",   &m56_m442.message_timeout_counter, BASE_INT, REPLAY_USE},	//###15
        {"%hhu ",   &m56_m442.msgcnt_id202, BASE_CHAR, REPLAY_USE},		//###16
//m56_m443_t
        {"%u ",   &m56_m443.message_timeout_counter, BASE_INT, REPLAY_USE},	//###17
        {"%hhu ",   &m56_m443.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###18

        //GPS range to n cars ahead
        {"%.1f ",   &m56_m443.host_rx_gps_range, BASE_FLOAT, REPLAY_USE},	//###19

        //Tracking status received from n cars ahead
        //0=idle, 1=detecting, 2=tracking, 3=coupling, 0xF=invalid
        {"%hhu ",   &m56_m443.host_rx_gps_tracking_status, BASE_CHAR, REPLAY_USE},//###20

        //Vehicle position type received from n cars ahead
        //0=standalone vehicle, 1=head of train, 2=tail of train,
        //3=middle vehicle of train, 0xF=invalid
        {"%hhu ",   &m56_m443.host_rx_gps_veh_pos_type, BASE_CHAR, REPLAY_USE},	//###21

        //Forward sequence number received from n cars ahead
        //0=head vehicle of train, 1-0xFE=following vehicles,
        //0xFF=invalid
        {"%hhu ",   &m56_m443.host_rx_fwd_seq_num, BASE_CHAR, REPLAY_USE},	//###22

        //Backward sequence number received from n cars ahead
        //0=tail vehicle of train, 1-0xFE=preceding vehicles,
        //0xFF=invalid
        {"%hhu ",   &m56_m443.host_rx_backwd_seq_num, BASE_CHAR, REPLAY_USE},	//###23
//m56_m444_t
        {"%u ",   &m56_m444.message_timeout_counter, BASE_INT, REPLAY_USE},	//###24
        {"%hhu ",   &m56_m444.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###25

        //WSU ID from n cars ahead
        {"%hu ",   &m56_m444.host_rx_wsu_id, BASE_CHAR, REPLAY_USE},		//###26

        //Percent channel busy received from n cars ahead
        {"%hhu ",   &m56_m444.host_rx_chanbusy, BASE_CHAR, REPLAY_USE},		//###27

        //RSS in dBm received from n cars ahead
        {"%.1f ",   &m56_m444.host_rx_rss, BASE_FLOAT, REPLAY_USE},		//###28

        //RxPktPER% received from n cars ahead
        //I assume this is a percentage of packets received
        {"%.1f ",   &m56_m444.host_rx_pkt_pct, BASE_FLOAT, REPLAY_USE},	//###29
//m56_m445_t
        {"%u ",   &m56_m445.message_timeout_counter, BASE_INT, REPLAY_USE},	//###30
        {"%hhu ",   &m56_m445.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###31

        //GPS latitude received from n cars ahead
        {"%.6f ",   &m56_m445.host_rx_gps_latitude, BASE_FLOAT, REPLAY_USE},	//###32

        //GPS heading received from n cars ahead
        {"%.1f ",   &m56_m445.host_rx_gps_heading, BASE_FLOAT, REPLAY_USE},	//###33
//m56_m446_t
        {"%u ",   &m56_m446.message_timeout_counter, BASE_INT, REPLAY_USE},	//###34
        {"%hhu ",   &m56_m446.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###35

        //GPS longitude received from n cars ahead
        {"%.6f ",   &m56_m446.host_rx_gps_longitude, BASE_FLOAT, REPLAY_USE},	//###36

        //GPS speed received from n cars ahead
        {"%.1f ",   &m56_m446.host_rx_gps_speed, BASE_FLOAT, REPLAY_USE},	//###37
//m56_m447_t
        {"%u ",   &m56_m447.message_timeout_counter, BASE_INT, REPLAY_USE},	//###38
        {"%hhu ",   &m56_m447.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###39

        //GPS altitude received from n cars ahead
        {"%.2f ",   &m56_m447.host_rx_gps_altitude, BASE_FLOAT, REPLAY_USE},	//###40
//m56_m448_t
        {"%u ",   &m56_m448.message_timeout_counter, BASE_INT, REPLAY_USE},	//###41
        {"%hhu ",   &m56_m448.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###42

        //GPS timestamp milliseconds, received from n cars ahead
        {"%hu ",   &m56_m448.host_rx_gps_ts_millisecond, BASE_SHORT, REPLAY_USE},//###43

        //GPS range to host vehicle received from n cars ahead
        {"%.1f ",   &m56_m448.host_rx_gps_range2host, BASE_FLOAT, REPLAY_USE},	//###44

        //Relative position to host vehicle received from n cars ahead
        //0x00=unclassified, 0x01=ahead, 0x02=behind, 0x03=oncoming,
        //0x04=ahead left, 0x05=ahead right, 0x06=behind left,
        //0x07=behind right, 0x08=oncoming left, 0x09=oncoming right,
        //0x0A=ahead far left, 0X0B=ahead far right, 0x0C=behind far left,
        //0x0D=behind far right, 0x0E=oncoming far left,
        //0x0F=oncoming far right, 0x10=intersecting left
        //0x11=intersecting right
        {"%hhu ",   &m56_m448.host_rx_gps_relpos2host, BASE_CHAR, REPLAY_USE},	//###45
//m56_m490_t
        {"%u ",   &m56_m490.message_timeout_counter, BASE_INT, REPLAY_USE},	//###46
        {"%hhu ",   &m56_m490.msgcnt_id200, BASE_CHAR, REPLAY_USE},		//###47

        //Current speed received from n cars behind
        {"%.1f ",   &m56_m490.host_rx_vsp_491, BASE_FLOAT, REPLAY_USE},	//###48

        //Target speed received from n cars behind, distance not controlled
        {"%.1f ",   &m56_m490.host_rx_vspcomn_491, BASE_FLOAT, REPLAY_USE},	//###49

        //Target speed received from n cars behind, distance controlled
        {"%.1f ",   &m56_m490.host_rx_acvcomo_491, BASE_FLOAT, REPLAY_USE},	//###50

        //Current acceleration received from n cars behind
        {"%.2f ",   &m56_m490.host_rx_xg_491, BASE_FLOAT, REPLAY_USE},		//###51
//m56_m491_t
        {"%u ",   &m56_m491.message_timeout_counter, BASE_INT, REPLAY_USE},	//###52
        {"%hhu ",   &m56_m491.msgcnt_id201, BASE_CHAR, REPLAY_USE},		//###53

        //Distance received from n cars behind
        {"%.1f ",   &m56_m491.host_rx_mdistance_491, BASE_FLOAT, REPLAY_USE},	//###54

        //Speed received from n cars behind
        {"%.1f ",   &m56_m491.host_rx_vr_491, BASE_FLOAT, REPLAY_USE},		//###55

        //Brake switch status received from n cars behind
        {"%hhu ",   &m56_m491.host_rx_brake_sw_491, BASE_CHAR, REPLAY_USE},	//###56

        //Accelerator switch status received from n cars behind
        {"%hhu ",   &m56_m491.host_rx_accel_sw_491, BASE_CHAR, REPLAY_USE},	//###57

        //Set speed received from n cars behind
        {"%.1f ",   &m56_m491.host_rx_setvsp_491, BASE_FLOAT, REPLAY_USE},	//###58
//m56_m492_t
        {"%u ",   &m56_m492.message_timeout_counter, BASE_INT, REPLAY_USE},	//###59
        {"%hhu ",   &m56_m492.msgcnt_id202, BASE_CHAR, REPLAY_USE},		//###60
//m56_m493_t
        {"%u ",   &m56_m493.message_timeout_counter, BASE_INT, REPLAY_USE},	//###61
        {"%hhu ",   &m56_m493.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###62

        //GPS range to n cars behind
        {"%.1f ",   &m56_m493.host_rx_gps_range, BASE_FLOAT, REPLAY_USE},	//###63

        //Tracking status received from n cars behind
        //0=idle, 1=detecting, 2=tracking, 3=coupling, 0xF=invalid
        {"%hhu ",   &m56_m493.host_rx_gps_tracking_status, BASE_CHAR, REPLAY_USE},//###64

        //Vehicle position type received from n cars behind
        //0=standalone vehicle, 1=head of train, 2=tail of train,
        //3=middle vehicle of train, 0xF=invalid
        {"%hhu ",   &m56_m493.host_rx_gps_veh_pos_type, BASE_CHAR, REPLAY_USE},	//###65

        //Forward sequence number received from n cars behind
        //0=head vehicle of train, 1-0xFE=following vehicles,
        //0xFF=invalid
        {"%hhu ",   &m56_m493.host_rx_fwd_seq_num, BASE_CHAR, REPLAY_USE},	//###66

        //Backward sequence number received from n cars behind
        //0=tail vehicle of train, 1-0xFE=preceding vehicles,
        //0xFF=invalid
        {"%hhu ",   &m56_m493.host_rx_backwd_seq_num, BASE_CHAR, REPLAY_USE},	//###67
//m56_m494_t
        {"%u ",   &m56_m494.message_timeout_counter, BASE_INT, REPLAY_USE},	//###68
        {"%hhu ",   &m56_m494.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###69

        //WSU ID from n cars behind
        {"%hu ",   &m56_m494.host_rx_wsu_id, BASE_CHAR, REPLAY_USE},		//###70

        //Percent channel busy received from n cars behind
        {"%hhu ",   &m56_m494.host_rx_chanbusy, BASE_CHAR, REPLAY_USE},		//###71

        //RSS in dBm received from n cars behind
        {"%.1f ",   &m56_m494.host_rx_rss, BASE_FLOAT, REPLAY_USE},		//###72

        //RxPktPER% received from n cars behind
        //I assume this is a percentage of packets received
        {"%.1f ",   &m56_m494.host_rx_pkt_pct, BASE_FLOAT, REPLAY_USE},	//###73
//m56_m495_t
        {"%u ",   &m56_m495.message_timeout_counter, BASE_INT, REPLAY_USE},	//###74
        {"%hhu ",   &m56_m495.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###75

        //GPS latitude received from n cars behind
        {"%.6f ",   &m56_m495.host_rx_gps_latitude, BASE_FLOAT, REPLAY_USE},	//###76

        //GPS heading received from n cars behind
        {"%.1f ",   &m56_m495.host_rx_gps_heading, BASE_FLOAT, REPLAY_USE},	//###77
//m56_m496_t
        {"%u ",   &m56_m496.message_timeout_counter, BASE_INT, REPLAY_USE},	//###78
        {"%hhu ",   &m56_m496.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###79

        //GPS longitude received from n cars behind
        {"%.6f ",   &m56_m496.host_rx_gps_longitude, BASE_FLOAT, REPLAY_USE},	//###80

        //GPS speed received from n cars behind
        {"%.1f ",   &m56_m496.host_rx_gps_speed, BASE_FLOAT, REPLAY_USE},	//###81
//m56_m497_t
        {"%u ",   &m56_m497.message_timeout_counter, BASE_INT, REPLAY_USE},	//###82
        {"%hhu ",   &m56_m497.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###83

        //GPS altitude received from n cars behind
        {"%.2f ",   &m56_m497.host_rx_gps_altitude, BASE_FLOAT, REPLAY_USE},	//###84
//m56_m498_t
        {"%u ",   &m56_m498.message_timeout_counter, BASE_INT, REPLAY_USE},	//###85
        {"%hhu ",   &m56_m498.msgcnt_n, BASE_CHAR, REPLAY_USE},			//###86

        //GPS timestamp milliseconds, received from n cars behind
        {"%hu ",   &m56_m498.host_rx_gps_ts_millisecond, BASE_SHORT, REPLAY_USE},//###87

        //GPS range to host vehicle received from n cars behind
        {"%.1f ",   &m56_m498.host_rx_gps_range2host, BASE_FLOAT, REPLAY_USE},	//###88

        //Relative position to host vehicle received from n cars behind
        //0x00=unclassified, 0x01=ahead, 0x02=behind, 0x03=oncoming,
        //0x04=ahead left, 0x05=ahead right, 0x06=behind left,
        //0x07=behind right, 0x08=oncoming left, 0x09=oncoming right,
        //0x0A=ahead far left, 0X0B=ahead far right, 0x0C=behind far left,
        //0x0D=behind far right, 0x0E=oncoming far left,
        //0x0F=oncoming far right, 0x10=intersecting left
        //0x11=intersecting right
        {"%hhu ",   &m56_m498.host_rx_gps_relpos2host, BASE_CHAR, REPLAY_USE},	//###89
};

#define NUM_CFILE_COLUMNS sizeof(comm_specc)/sizeof(data_log_column_spec_t)
int num_cfile_columns = sizeof(comm_specc)/sizeof(data_log_column_spec_t);

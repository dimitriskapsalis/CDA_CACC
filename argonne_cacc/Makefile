
# Makefile - PATH GPS sample programs
#
# Copyright (c) 2008   Regents of the University of California
#

include capath_qnx.mk

PATH_OBJS += $(OBJDIR)/long_control.o
PATH_CFLAGS += -g -O0 -finstrument-functions -I../../common -I../prius/can/src -I../camry/can/src -I../leaf/can/src -I../include -fPIC -I../steinhoff -I../vehcomm -I../hmi/hmi_server
PATH_LDFLAGS += -fPIC -L../lib
PATH_LIBS += -lprofilingS

EXEC = $(OBJDIR)/argonne_cacc

all: $(OBJDIR) $(PATH_INCLUDES) $(PATH_OBJS) $(EXEC)

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	rm -f $(OBJDIR)/*.o *.err $(EXEC)

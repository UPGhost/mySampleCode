include ${IPCM_TOP}/config.mk

# Setting output compile message
V?=0

# Setting shared library or binary and TARGET name
SHARED_LIBS?=0
TARGET = hellomake

# Setting CFLAGS and LDFLAGS
CFLAGS += -fPIC -Wall -Wextra -O2 -g -Iinc 
CXXFLAGS += -DMYDEF2
LDFLAGS +=  

ifeq ($(SHARED_LIBS),0)
    PACKAGENAME = $(addsuffix .tar.xz,$(TARGET))
else
	TARGET := $(addprefix lib,$(TARGET))
	TARGET := $(addsuffix .so,$(TARGET))
	TARGET := $(TARGET)
    LDFLAGS += -shared  
    PACKAGENAME = $(addsuffix .tar.xz,$(basename $(TARGET)))
endif

# Makefile template for shared library
CROSS_COMPILE ?= arm-linux-
CC = $(CROSS_COMPILE)gcc
STRIP = $(CROSS_COMPILE)strip
AR = $(CROSS_COMPILE)ar

# command define
RM = rm -rf  	
MKDIR = mkdir -p
TAR = tar cfJ   
CP = cp -a  	

SRCS = $(wildcard ./src/*.c) # source files
OBJS = $(subst src,obj,$(SRCS:%.c=%.o))
H_SRCS = $(wildcard ./inc/*.h)
OUT_DIR=out
LIB_DIR=$(OUT_DIR)/lib
BIN_DIR=$(OUT_DIR)/bin

.PHONY: all clean

all: prepare ${TARGET} package

$(TARGET): $(OBJS)
	$(MKDIR) $(LIB_DIR) $(BIN_DIR)
ifeq ($(SHARED_LIBS),0)
	$(CC) ${LDFLAGS} -o $(BIN_DIR)/$@ $^
else
	$(CC) ${LDFLAGS} -o $(LIB_DIR)/$@ $^
endif

$(OBJS:%.o=%.d):obj/%.d:src/%.c
	@$(CC) $(CFLAGS) -MM $< >$@2
	@sed 's,\($*\)\.o[ :]*,obj\/\1.o: ,g' <$@2 >$@ 
	@$(RM) $@2

-include $(OBJS:%.o=%.d)

obj/%.o : src/%.c 
	@mkdir -p obj
ifeq ($(V),0)
	@echo "  CC  $<"
	@$(CC) $(CFLAGS) -c $< -o $@
else
	$(CC) $(CFLAGS) -c $< -o $@
endif

clean:
	${RM} ${OBJS} out/ package obj/*.d*

package:
	@echo "pack $(PACKAGENAME)"
ifeq ($(SHARED_LIBS),0)
	@$(MKDIR) package/$(TARGET) 
	@$(CP) out/* package/$(TARGET)
	@cd package && $(TAR) $(PACKAGENAME) $(TARGET)
else
	@$(MKDIR) package/$(basename $(TARGET))
	@$(CP) out/* package/$(basename $(TARGET))
	@$(CP) inc package/$(basename $(TARGET))
	@cd package && $(TAR) $(PACKAGENAME) $(basename $(TARGET))
endif

prepare:
	@echo
	@echo "========================================================"
	@echo "  PWD = $(shell pwd)"
	@echo "  CC = $(CC)"
	@echo "  STRIP = $(STRIP)"
	@echo "  AR = $(AR)"
	@echo "  IPCM_TOP = $(IPCM_TOP)"
	@echo "  TARGET = $(TARGET)"
	@echo "  PACKAGE NAME = $(PACKAGENAME)"
	@echo "========================================================"
	@echo


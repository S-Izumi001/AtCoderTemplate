SHELL :=/bin/bash

PROJ_DIR = $(realpath .)
PROJ_NAME = $(notdir $(PROJ_DIR))

TARGET_DIR ?= .obj
TARGET = $(TARGET_DIR)/$(PROJ_NAME)
OBJDIR = $(TARGET_DIR)/.obj/$(PROJ_NAME)

SRCS := atcoder.cpp
OBJS := $(OBJDIR)/atcoder.o

CXXFLAGS := -D_LOCAL_
LIBS += -lgtest -lgtest_main
INCD += -I$(ATCODER_HEADER)

.PHONY:
default: $(TARGET)

$(OBJDIR)/%.o: %.cpp
	@[ -d $(OBJDIR) ] || mkdir -p $(OBJDIR)
	@[ -d $(dir $@) ] || mkdir -p $(dir $@)
	$(CXX) -g -Wall -O0 $(CXXFLAGS) $(INCD) -o $@ -c $< -std=c++20

$(TARGET): $(OBJS)
	@[ -d $(dir $(TARGET)) ] || mkdir -p $(dir $(TARGET))
	@$(CXX) -g -o $(TARGET) $(LIBDIR) $(OBJS) $(LIBS) 

.PHONY:
clear clean:
	@-rm -rf $(OBJDIR)
	@-rm -rf $(TARGET)

.PHONY:
all: clean $(TARGET)

.PHONY:
run run_test: $(TARGET)
	$(TARGET)


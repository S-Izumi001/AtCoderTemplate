SHELL :=/bin/bash

PROJ_DIR = $(realpath .)
PROJ_NAME = $(notdir $(PROJ_DIR))

INPUTS := $(wildcard in/*.txt)

TARGET_DIR ?= .obj
TARGET = $(TARGET_DIR)/$(PROJ_NAME)
UNITTEST = $(TARGET_DIR)/$(PROJ_NAME)_unittest
OBJDIR = $(TARGET_DIR)/.obj/$(PROJ_NAME)

SRCS := atcoder.cpp
OBJS := $(OBJDIR)/atcoder.o

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

$(UNITTEST): $(OBJS)
	@[ -d $(dir $(UNITTEST)) ] || mkdir -p $(dir $(UNITTEST))
	@$(CXX) -g -o $(UNITTEST) $(LIBDIR) $(OBJS) $(LIBS) 

.PHONY:
clear clean:
	@-rm -rf $(OBJDIR)
	@-rm -rf $(TARGET)
	@-rm -rf $(UNITTEST)

.PHONY:
all: clean $(TARGET)

unit: CXXFLAGS := -D_TEST_
unit: clean $(UNITTEST)
	$(UNITTEST)

.PHONY:
run run_test: $(TARGET)
	$(TARGET)

.PHONY:
in: clean $(TARGET) check_inputs

check_inputs: $(TARGET) 
	@[ -d out ] || mkdir out
	@rm -rf out/*
	@for f in $(INPUTS); do \
		echo "run $$f"; \
		$(TARGET) < $$f > out/`basename $$f` ; \
	done

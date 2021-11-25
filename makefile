# ----------------------------
# Makefile Options
# ----------------------------

# Name of the application
NAME ?= APP

#For ICE shell
ICON ?= icon.png
DESCRIPTION ?= "Application"

#Memory allocation on calc
COMPRESSED ?= NO
ARCHIVED ?= NO

CFLAGS ?= -Wall -Wextra -Oz
CXXFLAGS ?= -Wall -Wextra -Oz

# ----------------------------

ifndef CEDEV
$(error CEDEV environment path variable is not set)
endif

include $(CEDEV)/meta/makefile.mk

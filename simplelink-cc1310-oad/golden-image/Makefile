CONTIKI_PROJECT = golden-image
all: $(CONTIKI_PROJECT)

CONTIKI = ../../..

-include $(CONTIKI)/Makefile.identify-target

MODULES_REL += $(TARGET)

PLATFORMS_ONLY = simplelink

# Routing configuration
MAKE_ROUTING = MAKE_ROUTING_NULLROUTING

# MAC layer configuration
MAKE_MAC = MAKE_MAC_NULLMAC

# Network layer configuration
MAKE_NET = MAKE_NET_NULLNET

### Use a custom LD script to reserve a flash area for BIM and OAD image
LDSCRIPT = oad.lds

include $(CONTIKI)/Makefile.include

# For automatic filename renaming
DEVICE_NAME = CC1310LP

# For .hex copying in the main directory
include Makefile.common
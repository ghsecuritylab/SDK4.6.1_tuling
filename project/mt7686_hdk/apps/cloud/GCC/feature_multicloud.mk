ifeq ($(PROJ_PATH),)
include feature.mk
else
include $(PROJ_PATH)/feature.mk
endif

MTK_JOYLINK_ENABLE	            = y
MTK_ALINK_ENABLE		    = y
MTK_AIRKISS_ENABLE          = y


#ifndef _UETAGS
#define _UETAGS

#include "rrm_oam_intf.h"

/*
#define RRM_OAM_API_BASE		13000

#define RRM_OAM_INIT_IND			(RRM_OAM_API_BASE + 1)
#define RRM_OAM_INIT_CONFIG_REQ			(RRM_OAM_API_BASE + 2)
#define RRM_OAM_INIT_CONFIG_RESP		(RRM_OAM_API_BASE + 3)
#define RRM_OAM_LOG_ENABLE_DISABLE_REQ		(RRM_OAM_API_BASE + 4)
#define RRM_OAM_LOG_ENABLE_DISABLE_RESP		(RRM_OAM_API_BASE + 5)
#define RRM_OAM_SET_LOG_LEVEL_REQ		(RRM_OAM_API_BASE + 6)
#define RRM_OAM_SET_LOG_LEVEL_RESP		(RRM_OAM_API_BASE + 7)
#define RRM_OAM_SHUTDOWN_REQ			(RRM_OAM_API_BASE + 8)
#define RRM_OAM_SHUTDOWN_RESP			(RRM_OAM_API_BASE + 9)
#define RRM_OAM_READY_FOR_SHUTDOWN_IND		(RRM_OAM_API_BASE + 10)
#define RRM_OAM_RESUME_SERVICE_REQ		(RRM_OAM_API_BASE + 11)
#define RRM_OAM_RESUME_SERVICE_RESP		(RRM_OAM_API_BASE + 12)
#define RRM_OAM_CELL_CONFIG_REQ			(RRM_OAM_API_BASE + 13)
#define RRM_OAM_CELL_CONFIG_RESP		(RRM_OAM_API_BASE + 14)
#define RRM_OAM_CELL_START_REQ			(RRM_OAM_API_BASE + 15)
#define RRM_OAM_CELL_START_RESP			(RRM_OAM_API_BASE + 16)
#define RRM_OAM_CELL_STOP_REQ			(RRM_OAM_API_BASE + 17)
#define RRM_OAM_CELL_STOP_RESP			(RRM_OAM_API_BASE + 18)
#define RRM_OAM_CELL_RECONFIG_REQ		(RRM_OAM_API_BASE + 19)
#define RRM_OAM_CELL_RECONFIG_RESP		(RRM_OAM_API_BASE + 20)
#define RRM_OAM_CELL_DELETE_REQ			(RRM_OAM_API_BASE + 21)
#define RRM_OAM_CELL_DELETE_RESP		(RRM_OAM_API_BASE + 22)
#define RRM_OAM_RAC_ENABLE_DISABLE_REQ		(RRM_OAM_API_BASE + 23)
#define RRM_OAM_RAC_ENABLE_DISABLE_RESP		(RRM_OAM_API_BASE + 24)

*/


#define RRM_MESSAGE_API_START       			6000
#define RRM_OAM_INIT_IND            			(RRM_MESSAGE_API_START + 1)
#define RRM_OAM_INIT_CNF            			(RRM_MESSAGE_API_START + 2)
#define RRM_OAM_SHUTDOWN_REQ        			(RRM_MESSAGE_API_START + 3)
#define RRM_OAM_LOG_ENABLE_DISABLE_REQ 			(RRM_MESSAGE_API_START + 4)
#define RRM_OAM_LOG_ENABLE_DISABLE_RESP 		(RRM_MESSAGE_API_START + 5)
#define RRM_OAM_SET_LOG_LEVEL_REQ   			(RRM_MESSAGE_API_START + 6)
#define RRM_OAM_SET_LOG_LEVEL_RESP  			(RRM_MESSAGE_API_START + 7)
#define RRM_OAM_CELL_CONFIG_REQ          		(RRM_MESSAGE_API_START + 8)
#define RRM_OAM_CELL_CONFIG_RESP       			(RRM_MESSAGE_API_START + 9)
#define RRM_OAM_CELL_RECONFIG_REQ   			(RRM_MESSAGE_API_START + 10)
#define RRM_OAM_CELL_RECONFIG_RESP     			(RRM_MESSAGE_API_START + 11)
#define RRM_OAM_CELL_DELETE_REQ     			(RRM_MESSAGE_API_START + 12)
#define RRM_OAM_CELL_DELETE_RESP    			(RRM_MESSAGE_API_START + 13)
#define RRM_OAM_GENERIC_RESP        			(RRM_MESSAGE_API_START + 14)
#define RRM_OAM_INIT_CONFIG_REQ     			(RRM_MESSAGE_API_START + 15)
#define RRM_OAM_INIT_CONFIG_RESP            		(RRM_MESSAGE_API_START + 16)
#define RRM_OAM_CELL_START_REQ              		(RRM_MESSAGE_API_START + 17)
#define RRM_OAM_CELL_STOP_REQ               		(RRM_MESSAGE_API_START + 18)
#define RRM_OAM_RESUME_SERVICE_REQ          		(RRM_MESSAGE_API_START + 19)
#define RRM_OAM_RESUME_SERVICE_RESP         		(RRM_MESSAGE_API_START + 20)
#define RRM_OAM_CELL_START_RESP                  	(RRM_MESSAGE_API_START + 21)
#define RRM_OAM_CELL_STOP_RESP                   	(RRM_MESSAGE_API_START + 22)
#define RRM_OAM_DELETE_RESP                 		(RRM_MESSAGE_API_START + 23)
#define RRM_OAM_RAC_ENABLE_DISABLE_REQ      		(RRM_MESSAGE_API_START + 24)
#define RRM_OAM_RAC_ENABLE_DISABLE_RESP     		(RRM_MESSAGE_API_START + 25)
#define RRM_OAM_SHUTDOWN_RESP               		(RRM_MESSAGE_API_START + 26)
//#define RRM_OAM_READY_FOR_SHUTDOWN_IND    (RRM_MESSAGE_API_START  + 27)  //This msg is supported in dissector.
#define RRM_CELL_CONTEXT_PRINT_REQ          		(RRM_MESSAGE_API_START + 27) 
#define RRM_OAM_CARRIER_FREQ_AND_DL_TX_POWER_REQ        (RRM_MESSAGE_API_START + 28)
#define RRM_OAM_CARRIER_FREQ_AND_DL_TX_POWER_RESP       (RRM_MESSAGE_API_START + 29)
#define RRM_OAM_UE_RELEASE_REQ                          (RRM_MESSAGE_API_START + 30)
//#define RRM_OAM_PROC_SUPERVISION_RESP           (RRM_MESSAGE_API_START + 31) //This msg is supported in dissector.

/* Soft Lock APIs Start */
#define RRM_OAM_BLOCK_CELL_REQ       			(RRM_MESSAGE_API_START + 33)
#define RRM_OAM_BLOCK_CELL_RESP      			(RRM_MESSAGE_API_START + 34)
#define RRM_OAM_UNBLOCK_CELL_CMD     			(RRM_MESSAGE_API_START + 35)
#define RRM_OAM_READY_FOR_CELL_BLOCK_IND 		(RRM_MESSAGE_API_START + 36)
#define RRM_OAM_CELL_ECN_CAPACITY_ENHANCE_REQ           (RRM_MESSAGE_API_START + 37) 
#define RRM_OAM_CELL_ECN_CAPACITY_ENHANCE_RESP          (RRM_MESSAGE_API_START + 38)


#define RRM_OAM_CELL_UPDATE_REQ                         (RRM_MESSAGE_API_START + 40)
#define RRM_OAM_CELL_UPDATE_RESP                        (RRM_MESSAGE_API_START + 41)
/* Soft Lock APIs End */
#define RRM_OAM_GET_VER_ID_REQ  			(RRM_MESSAGE_API_START + 42)
#define RRM_OAM_GET_VER_ID_RESP  			(RRM_MESSAGE_API_START + 43)
#define RRM_OAM_EVENT_NOTIFICATION			(RRM_MESSAGE_API_START + 46)
#define RRM_OAM_LOAD_CONFIG_REQ                         (RRM_MESSAGE_API_START + 49)
#define RRM_OAM_LOAD_CONFIG_RESP                        (RRM_MESSAGE_API_START + 50)
#define RRM_OAM_LOAD_REPORT_IND				(RRM_MESSAGE_API_START + 51)
#define RRM_OAM_EVENT_CONFIG_REQ 			(RRM_MESSAGE_API_START + 52)
#define RRM_OAM_EVENT_CONFIG_RESP 			(RRM_MESSAGE_API_START + 53)
#define RRM_OAM_CONFIG_KPI_REQ                          (RRM_MESSAGE_API_START + 56) 
#define RRM_OAM_CONFIG_KPI_RESP                         (RRM_MESSAGE_API_START + 57) 
#define RRM_OAM_GET_KPI_REQ                             (RRM_MESSAGE_API_START + 58) 
#define RRM_OAM_GET_KPI_RESP                            (RRM_MESSAGE_API_START + 59) 


#define RRM_OAM_RADIO_CONGESTION_THRESHOLD_REQ  	(RRM_MESSAGE_API_START + 37)
#define RRM_OAM_RADIO_CONGESTION_THRESHOLD_RESP 	(RRM_MESSAGE_API_START + 38)


#define RRM_MESSAGE_API_END                 		(RRM_MESSAGE_API_START + 100)



#define RRM_OAM_API_BASE            			RRM_MESSAGE_API_START
#define RRM_OAM_MAX_API             			RRM_MESSAGE_API_END



static const value_string tagType_rrm_oam[]=
{ 
  {RRM_OAM_INIT_IND, "RRM_OAM_INIT_IND"},			
  {RRM_OAM_INIT_CONFIG_REQ, "RRM_OAM_INIT_CONFIG_REQ"},
  {RRM_OAM_INIT_CONFIG_RESP, "RRM_OAM_INIT_CONFIG_RESP"},
  {RRM_OAM_LOG_ENABLE_DISABLE_REQ, "RRM_OAM_LOG_ENABLE_DISABLE_REQ"},
  {RRM_OAM_LOG_ENABLE_DISABLE_RESP, "RRM_OAM_LOG_ENABLE_DISABLE_RESP"},
  {RRM_OAM_SET_LOG_LEVEL_REQ, "RRM_OAM_SET_LOG_LEVEL_REQ"},
  {RRM_OAM_SET_LOG_LEVEL_RESP, "RRM_OAM_SET_LOG_LEVEL_RESP"},
  {RRM_OAM_SHUTDOWN_REQ, "RRM_OAM_SHUTDOWN_REQ"},
  {RRM_OAM_SHUTDOWN_RESP, "RRM_OAM_SHUTDOWN_RESP"},
 // {RRM_OAM_READY_FOR_SHUTDOWN_IND, "RRM_OAM_READY_FOR_SHUTDOWN_IND"},
  {RRM_OAM_RESUME_SERVICE_REQ, "RRM_OAM_RESUME_SERVICE_REQ"},
  {RRM_OAM_RESUME_SERVICE_RESP, "RRM_OAM_RESUME_SERVICE_RESP"},
  {RRM_OAM_CELL_CONFIG_REQ, "RRM_OAM_CELL_CONFIG_REQ"},
  {RRM_OAM_CELL_CONFIG_RESP, "RRM_OAM_CELL_CONFIG_RESP"},
  {RRM_OAM_CELL_START_REQ, "RRM_OAM_CELL_START_REQ"},
  {RRM_OAM_CELL_START_RESP, "RRM_OAM_CELL_START_RESP"},
  {RRM_OAM_CELL_STOP_REQ, "RRM_OAM_CELL_STOP_REQ"},
  {RRM_OAM_CELL_STOP_RESP, "RRM_OAM_CELL_STOP_RESP"},
  {RRM_OAM_CELL_RECONFIG_REQ, "RRM_OAM_CELL_RECONFIG_REQ"},
  {RRM_OAM_CELL_RECONFIG_RESP, "RRM_OAM_CELL_RECONFIG_RESP"},
  {RRM_OAM_CELL_DELETE_REQ, "RRM_OAM_CELL_DELETE_REQ"},
  {RRM_OAM_CELL_DELETE_RESP, "RRM_OAM_CELL_DELETE_RESP"},
  {RRM_OAM_RAC_ENABLE_DISABLE_REQ, "RRM_OAM_RAC_ENABLE_DISABLE_REQ"},
  {RRM_OAM_RAC_ENABLE_DISABLE_RESP, "RRM_OAM_RAC_ENABLE_DISABLE_RESP"},
  {RRM_CELL_CONTEXT_PRINT_REQ, "RRM_CELL_CONTEXT_PRINT_REQ"},
  {RRM_OAM_CARRIER_FREQ_AND_DL_TX_POWER_REQ, "RRM_OAM_CARRIER_FREQ_AND_DL_TX_POWER_REQ"},
  {RRM_OAM_CARRIER_FREQ_AND_DL_TX_POWER_RESP, "RRM_OAM_CARRIER_FREQ_AND_DL_TX_POWER_RESP"},
  {RRM_OAM_UE_RELEASE_REQ, "RRM_OAM_UE_RELEASE_REQ"},
 // {RRM_OAM_PROC_SUPERVISION_RESP, "RRM_OAM_PROC_SUPERVISION_RESP"}
  {RRM_OAM_BLOCK_CELL_REQ,"RRM_OAM_BLOCK_CELL_REQ"},
  {RRM_OAM_BLOCK_CELL_RESP,"RRM_OAM_BLOCK_CELL_RESP"},
  {RRM_OAM_UNBLOCK_CELL_CMD,"RRM_OAM_UNBLOCK_CELL_CMD"},
  {RRM_OAM_READY_FOR_CELL_BLOCK_IND,"RRM_OAM_READY_FOR_CELL_BLOCK_IND"},
  {RRM_OAM_GET_VER_ID_REQ,"RRM_OAM_GET_VER_ID_REQ"},
  {RRM_OAM_GET_VER_ID_RESP,"RRM_OAM_GET_VER_ID_RESP"},
  {RRM_OAM_CELL_UPDATE_REQ,"RRM_OAM_CELL_UPDATE_REQ"},             
  {RRM_OAM_CELL_UPDATE_RESP,"RRM_OAM_CELL_UPDATE_RESP"},            
  {RRM_OAM_EVENT_NOTIFICATION,"RRM_OAM_EVENT_NOTIFICATION"},
  {RRM_OAM_LOAD_CONFIG_REQ, "RRM_OAM_LOAD_CONFIG_REQ"},
  {RRM_OAM_LOAD_CONFIG_RESP, "RRM_OAM_LOAD_CONFIG_RESP"},
  {RRM_OAM_LOAD_REPORT_IND, "RRM_OAM_LOAD_REPORT_IND"},
  {RRM_OAM_CELL_ECN_CAPACITY_ENHANCE_REQ, "RRM_OAM_CELL_ECN_CAPACITY_ENHANCE_REQ"},
  {RRM_OAM_CELL_ECN_CAPACITY_ENHANCE_RESP, "RRM_OAM_CELL_ECN_CAPACITY_ENHANCE_RESP"},
  {RRM_OAM_CONFIG_KPI_REQ, "RRM_OAM_CONFIG_KPI_REQ"},
  {RRM_OAM_CONFIG_KPI_RESP, "RRM_OAM_CONFIG_KPI_RESP"},
  {RRM_OAM_GET_KPI_REQ, "RRM_OAM_GET_KPI_REQ"},
  {RRM_OAM_GET_KPI_RESP, "RRM_OAM_GET_KPI_RESP"},
 
};


#endif

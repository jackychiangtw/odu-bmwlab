/*******************************************************************************
################################################################################
#   Copyright (c) [2017-2019] [Radisys]                                        #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################
*******************************************************************************/

/* This file contains message handling functionality for DU cell management */

#include "du_mgr.h"

/**************************************************************************
 * @brief Task Initiation callback function. 
 *
 * @details
 *
 *     Function : duActvInit 
 *    
 *     Functionality:
 *             This function is supplied as one of parameters during DU APP's 
 *             task registration. SSI will invoke this function once, after
 *             it creates and attaches this TAPA Task to a system task.
 *     
 * @param[in]  Ent entity, the entity ID of this task.     
 * @param[in]  Inst inst, the instance ID of this task.
 * @param[in]  Region region, the region ID registered for memory 
 *              usage of this task.
 * @param[in]  Reason reason.
 * @return ROK     - success
 *         RFAILED - failure
 ***************************************************************************/
S16 duActvInit(Ent entity, Inst inst, Region region, Reason reason)
{
//TODO: TBD

   return ROK;

}

/**************************************************************************
 * @brief Task Activation callback function. 
 *
 * @details
 *
 *      Function : duActvTsk 
 * 
 *      Functionality:
 *           Primitives invoked by DU APP's users/providers through
 *           a loosely coupled interface arrive here by means of 
 *           SSI's message handling. This API is registered with
 *           SSI during the Task Registration of DU APP.
 *     
 * @param[in]  Pst     *pst, Post structure of the primitive.     
 * @param[in]  Buffer *mBuf, Packed primitive parameters in the
 *  buffer.
 * @return ROK     - success
 *         RFAILED - failure
 *
 ***************************************************************************/
S16 duActvTsk(Pst *pst, Buffer *mBuf)
{
   S16 ret = ROK;

   switch(pst->srcEnt)
   {
      case ENTDUAPP:
         {
            switch(pst->event)
            {
               case EVTCFG:
                  {
                     duProcCfgComplete();
                     SPutMsg(mBuf);
                     break;
                  }
               default:
                  {
                     printf("\nInvalid event received at duActvTsk from ENTDUAPP");
                     SPutMsg(mBuf);
                     ret = RFAILED;
                  }
            }

            break;
         }
      case ENTF1AP:
         {

            break;
         }
      case ENTRG: //TODO: Layer cfg for RLC UL, DL and MAC must be done
         {
            switch(pst->event)
            {
               //Config complete
               case EVTCFG:
                  {
                     //TODO: Implement duEstablishSctpToCu();
                     SPutMsg(mBuf);
                     break;
                  }
               default:
                  {
                     printf("\nInvalid event received at duActvTsk from ENTRG");
                     SPutMsg(mBuf);
                     ret = RFAILED;
                  }
            }

            break;
         }
      case ENTSCTP:
         {
            switch(pst->event)
            {
               case EVTSCTPUP:
                  {
                     //Setup F1-C
                     SPutMsg(mBuf);
                     break;
                  }
               default:
                  {
                     printf("\nInvalid event received at duActvTsk from ENTRG");
                     SPutMsg(mBuf);
                     ret = RFAILED;
                  }

            }
         }
      default:
         {
            printf("\n DU APP can not process message from Entity %d", pst->srcEnt);
            SPutMsg(mBuf);
            ret = RFAILED;
         }

   }

   SExitTsk();
   return ret;
}

/**************************************************************************
 * @brief Function to invoke DU Layer Configs
 *
 * @details
 *
 *      Function : duProcCfgComplete 
 * 
 *      Functionality:
 *           Initiates Configs towards layers of DU
 *     
 * @param[in]  void
 * @return ROK     - success
 *         RFAILED - failure
 *
 ***************************************************************************/
S16 duProcCfgComplete()
{
//TBD: invoke SCTP/layer config

//   duHdlRlcUlCfgEvent();

   return ROK;
}

/**********************************************************************
         End of file
**********************************************************************/

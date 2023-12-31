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

#ifndef __DU_MGR_MAIN_H__
#define __DU_MGR_MAIN_H__


/* Function declarations */
uint8_t duAppInit(SSTskId sysTskId);
uint8_t sctpInit(SSTskId sysTskId);
uint8_t rlcDlInit(SSTskId sysTskId);
uint8_t rlcUlInit(SSTskId sysTskId);
uint8_t commonInit();
uint8_t duInit();
uint8_t tst(void);
//uint8_t setRrmPolicy(RrmPolicyList rrmPolicy[], uint8_t policyNum);
uint8_t setRrmPolicyDummy();


#endif

/**********************************************************************
         End of file
**********************************************************************/

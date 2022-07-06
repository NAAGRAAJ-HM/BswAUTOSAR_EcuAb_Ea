#pragma once
/******************************************************************************/
/* File   : Ea.hpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgEa.hpp"
#include "Ea_core.hpp"
#include "infEa_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Ea:
      INTERFACES_EXPORTED_EA
      public abstract_module
   ,  public class_Ea_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, EA_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, EA_CONFIG_DATA, EA_APPL_CONST) lptrCfgModule
      );
      FUNC(void, EA_CODE) DeInitFunction (void);
      FUNC(void, EA_CODE) MainFunction   (void);
      EA_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Ea, EA_VAR) Ea;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


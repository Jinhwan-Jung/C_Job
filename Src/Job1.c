/**
*********************************************************************************************************
*                                               CloseEye_addr Personal
* 
*                                   (c) Copyright 2022 - 2052, CloseEye Study
*                                               All Rights Reserved
*   @file       job1.c
*   @date       2022.06.15
*   @author     Jinhwan.Jung
*   @version    1.0
*   @brief      To verity the new function. @n
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                           Include Files
*
*********************************************************************************************************
*/
#include "Mod_Includes.h"




/*
*********************************************************************************************************
*                                           Global Variable
*
*********************************************************************************************************
*/



/*
*********************************************************************************************************
*                                           Local Function Prototype
*
*********************************************************************************************************
*/



/**
*********************************************************************************************************
*   @fn                         void Job_Base(void)
*   @author         Jinhwan.Jung
*   @return         void
*   @remark         
*********************************************************************************************************
*/
void Job_Base(void)
{
    uint8   i;
    uint8   buf[10] = {1,46,6,3,6, 3,7,3,7,25};
    
    printf("\n************************");
    printf("\n*     Job Base Arch    *");
    printf("\n************************");

#if 0
    printf("\n ");
    for (i=0 ; i<10 ; i++)
        printf(" %3d ", buf[i]);

    Lib_Sel_Sort (buf, 10, LIB_SORT_LO);

    printf("\n ");
    for (i=0 ; i<10 ; i++)
        printf(" %3d ", buf[i]);


    Lib_Sel_Sort (buf, 10, LIB_SORT_HI);

    printf("\n ");
    for (i=0 ; i<10 ; i++)
        printf(" %3d ", buf[i]);

    printf("\n min val = %3d ", Lib_Find_MinMax(buf, 10,LIB_SORT_HI) );
    printf("\n max val = %3d ", Lib_Find_MinMax(buf, 10,LIB_SORT_LO) );
#endif

    printf("\n 4, 8 = %d", Lib_GCD_ReFunc(4, 8));
    printf("\n 4, 8 = %d", Lib_GCD_ReFunc(8, 4));
    printf("\n 4, 8 = %d", Lib_GCD_ReFunc(8, 0));
    printf("\n 4, 8 = %d", Lib_GCD_ReFunc(0, 8));    


    printf("\n 4, 8 = %d", Lib_GCD_While(4, 8));
    printf("\n 4, 8 = %d", Lib_GCD_While(8, 4));
    printf("\n 4, 8 = %d", Lib_GCD_While(8, 1));
    printf("\n 4, 8 = %d", Lib_GCD_While(1, 8));    


    printf("\n 2, 3 = %d", Lib_LCM_ReFunc(2, 3));    
    printf("\n 7, 9 = %d", Lib_LCM_While (7, 9));        

    

    printf("\n************************\n");

}




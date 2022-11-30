/**
*********************************************************************************************************
*                                               CloseEye_addr Personal
* 
*                                   (c) Copyright 2022 - 2052, CloseEye Study
*                                               All Rights Reserved
*   @file       Job_Lib.h
*   @date       2022.06.15
*   @author     Jinhwan.Jung
*   @version    1.0
*   @brief      This file starts at first when the program is run. @n
*               This file was created for testing with the C compiler(MS Visual Studio). @n
*   
*********************************************************************************************************
*/
#ifndef JOB_LIB_h
#define JOB_LIB_h


/*
*********************************************************************************************************
*                                           New Type Define
*
*********************************************************************************************************
*/
typedef enum {
    LIB_SORT_HI = 0u,       /* Ascending  오름 차순 : 낮은 값 부터 배열 */
    LIB_SORT_LO,            /* Descending 내림 차순 : 높은 값 부터 배열 */

    LIB_SORT_Max

}Lib_Sort_et;


typedef enum {
    LIB_FIND_MIN = 0u,      /* Min : 배열에서 min 값 찾기 */
    LIB_FIND_MAX            /* Max : 배열에서 max 값 찾기 */

}Lib_MinMax_et;


/*
*********************************************************************************************************
*                                           Define Declare
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                           Function Prototype
*
*********************************************************************************************************
*/
extern void     Lib_Bub_Sort(uint8 ar[], uint16 len, Lib_Sort_et type);
extern void     Lib_Sel_Sort(uint8 ar[], uint16 len, Lib_Sort_et type);

extern uint8    Lib_Find_MinMax(uint8 ar[], uint16 len, Lib_MinMax_et type);

extern uint32   Lib_GCD_ReFunc(uint32 a, uint32 b);
extern uint32   Lib_GCD_While(uint32 a, uint32 b);
extern uint32   Lib_LCM_ReFunc(uint32 a, uint32 b);
extern uint32   Lib_LCM_While(uint32 a, uint32 b);


#endif  /* End of File  */


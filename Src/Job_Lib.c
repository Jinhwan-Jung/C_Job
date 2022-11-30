/**
*********************************************************************************************************
*                                               CloseEye_addr Personal
* 
*                                   (c) Copyright 2022 - 2052, CloseEye Study
*                                               All Rights Reserved
*   @file       job_Lib.c
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
#define MF_SWAP(a, b, t)        {t = a; a = b; b = t; }


/**
*********************************************************************************************************
*   @fn                         void Lib_Bub_Sort(void *array, uint16 len, Lib_Sort_et type)
*   @author         Jinhwan.Jung
*   @return         void
*   @remark         This method has very Simple code, but it is the least efficient.
*********************************************************************************************************
*/
void Lib_Bub_Sort(uint8 ar[], uint16 len, Lib_Sort_et type)
{
    uint8   temp;
    uint16  i, j; 

    for (i=0u ; i<(len-1) ; i++)
    {
        for (j=1u ; j<(len-i) ; j++)
        {
            if (type == LIB_SORT_HI)
            {
                if (ar[j-1] > ar[j])
                {
                    MF_SWAP( ar[j-1], ar[j], temp );
                }
            }
            else
            {
                if (ar[j-1] < ar[j])
                {
                    MF_SWAP( ar[j-1], ar[j], temp );
                }
            }
        }
    }
}


/**
*********************************************************************************************************
*   @fn                         void Lib_Sel_Sort(void *array, uint16 len, Lib_Sort_et type)
*   @author         Jinhwan.Jung
*   @return         void
*   @remark         This method is closed to the human thinking, but it is not good efficient.
*********************************************************************************************************
*/
void Lib_Sel_Sort(uint8 ar[], uint16 len, Lib_Sort_et type)
{
    uint8   temp;
    uint16  i, j;
    uint16  sel;

    for (i=0u ; i<(len-1) ; i++)
    {
        for (sel = i, j = (i+1) ; j<len ; j++)
        {
            if (type == LIB_SORT_HI)
            {
                if (ar[sel] > ar[j])
                {
                    sel = j;
                }
            }
            else
            {
                if (ar[sel] < ar[j])
                {
                    sel = j;
                }
            }
        }
        if (sel != i)
        {
            MF_SWAP( ar[sel], ar[i], temp );
        }
    }
}


/**
*********************************************************************************************************
*   @fn                         uint8 Lib_Find_MinMax(uint8 ar[], uint16 len, Lib_MinMax_et type)
*   @author         Jinhwan.Jung
*   @return         void
*   @remark         Find a Mix or Max value based on type on Array.
*                   For this function, it was used the Sort function.
*********************************************************************************************************
*/
uint8 Lib_Find_MinMax(uint8 ar[], uint16 len, Lib_MinMax_et type)
{
    uint8   rtn;

    Lib_Sel_Sort(ar, len, (Lib_Sort_et)type);

    rtn = ar[0];

    return rtn;
}


/**
*********************************************************************************************************
*   @fn                         uint32 Lib_GCD_ReFunc(uint32 a, uint32 b)
*   @author         Jinhwan.Jung
*   @return         void
*   @remark         Using Recursion Function (재귀 함수 )
*                   재귀 함수를 사용하여 최대 공약수 구하기 
*********************************************************************************************************
*/
uint32 Lib_GCD_ReFunc(uint32 a, uint32 b)
{
    if (b == 0u)    {return a;                      }
    else            {return Lib_GCD_ReFunc(b, a%b); }
}


/**
*********************************************************************************************************
*   @fn                         uint32 Lib_GCD_While(uint32 a, uint32 b)
*   @author         Jinhwan.Jung
*   @return         void
*   @remark         Using while function
*                   반복문을 사용하여 최대 공약수 구하기 
*********************************************************************************************************
*/
uint32 Lib_GCD_While(uint32 a, uint32 b)
{
    uint32  temp, n;

    if (a < b)
    {
        MF_SWAP(a, b, temp); 
    }

    while (b != 0u)
    {
        n = a % b;
        a = b;
        b = n;
    }

    return a;
}


/**
*********************************************************************************************************
*   @fn                         uint32 Lib_LCM_ReFunc(uint32 a, uint32 b)
*   @author         Jinhwan.Jung
*   @return         void
*   @remark         Using Recursion Function (재귀 함수 )
*                   재귀 함수를 사용하여 최소 공배수  구하기 
*********************************************************************************************************
*/
uint32 Lib_LCM_ReFunc(uint32 a, uint32 b)
{
    return a * b / Lib_GCD_ReFunc(a, b);
}


/**
*********************************************************************************************************
*   @fn                         uint32 Lib_LCM_While(uint32 a, uint32 b)
*   @author         Jinhwan.Jung
*   @return         void
*   @remark         Using Recursion Function (재귀 함수 )
*                   재귀 함수를 사용하여 최소 공배수  구하기 
*********************************************************************************************************
*/
uint32 Lib_LCM_While(uint32 a, uint32 b)
{
    return a * b / Lib_GCD_While(a, b);
}




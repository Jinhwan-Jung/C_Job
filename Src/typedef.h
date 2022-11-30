/**
*********************************************************************************************************
*                                               CloseEye_addr Personal
*
*                                   (c) Copyright 2022 - 2052, CloseEye Study
*                                               All Rights Reserved
*   @file       TypeDef.h
*   @date       2022.06.15
*   @author     Jinhwan.Jung
*   @version    1.0
*   @brief      This file define the C type.
*   
*********************************************************************************************************
*/
#ifndef TYPEDEF_h
#define TYPEDEF_h


/*
*********************************************************************************************************
*                                           Typedef
*
*********************************************************************************************************
*/
typedef unsigned char   uint8;          /*              0 .. 255            */
typedef unsigned char   uint8_t;        /*              0 .. 255            */
typedef unsigned char   INT8U;          /*              0 .. 255            */

typedef unsigned short  uint16;         /*              0 .. 65,535         */
typedef unsigned short  uint16_t;       /*              0 .. 65,535         */
typedef unsigned short  INT16U;         /*              0 .. 65,535         */

typedef unsigned long   uint32;         /*              0 .. 4,294,967,295  */
typedef unsigned long   uint32_t;       /*              0 .. 4,294,967,295  */
typedef unsigned long   INT32U;         /*              0 .. 4,294,967,295  */

typedef signed char     sint8;          /*           -128 .. +127           */
typedef signed char     sint8_t;        /*           -128 .. +127           */
typedef signed char     INT8S;          /*           -128 .. +127           */

typedef signed short    sint16;         /*        -32,768 .. +32,767        */
typedef signed short    sint16_t;       /*        -32,768 .. +32,767        */
typedef signed short    INT16S;         /*        -32,768 .. +32,767        */

typedef signed long     sint32;         /* -2,147,483,648 .. +2,147,483,647 */
typedef signed long     sint32_t;       /* -2,147,483,648 .. +2,147,483,647 */
typedef signed long     INT32S;         /* -2,147,483,648 .. +2,147,483,647 */

typedef float           FP32;
typedef double          FP64;

typedef unsigned char   boolean;        /* for use with TRUE/FALSE          */


/*
*********************************************************************************************************
*                                           Declare MACRO
*
*********************************************************************************************************
*/
#ifndef E_OK
  #define E_OK          0u
#endif

#ifndef E_NOT_OK
  #define E_NOT_OK      1u
#endif


#ifndef TRUE
  #define TRUE          1u
  #define true          1u
#endif

#ifndef FALSE
  #define FALSE         0u
  #define false         0u
#endif

#ifndef ENABLE
  #define ENABLE        1u
#endif  

#ifndef DISABLE
  #define DISABLE       0u
#endif  

#ifndef NULL_PTR
#define NULL_PTR        ((void *)0)
#endif


/** @def randomize() 
    - The Start point to generate a random value. @n
    - If this function is NOT called, the random value is the same always. */
#define randomize()     srand( (unsigned)time(NULL) )       


/** @def random(n) 
    - The Random value generation from 0 to n */
#define random(n)       ( rand() % (n) )


/** @def delay(n)
    - 1/1000 sec Time Delay Fucntion same as Delay_ms */
#define delay(n)        _sleep(n)


#endif  /* End of File  */


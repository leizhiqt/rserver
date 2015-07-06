/*****************************************************************************/
/*                                                                           */
/*           系统名        ：        内蒙气象局后台服务                      */
/*           客户名        ：        内蒙气象局                              */
/*           机能名        ：        共通机能                                */
/*           程序名        ：        Process.h                               */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/*                VERSION    DATE      BY      CHANGE/COMMENT                */
/*---------------------------------------------------------------------------*/
/*                V1.00      09-11-11          Create                        */
/*                                                                           */
/*****************************************************************************/

#if !defined(_IPROCESS_H)
#define _IPROCESS_H

#include    "TCPSocket.h"
#include    "VodEntity.h"

class IProcess {
public:
    IProcess();
    virtual ~IProcess() = 0;

    virtual void Do() = 0;
    virtual void SetRecvInfo(HTCPSocket* pRecvSocket, int nType) = 0;
};

#endif  //_IPROCESS_H

/*****************************************************************************
    End
*****************************************************************************/
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasCommunicatorBase : NSObject
{
}

- (void)report:(id)arg1 action:(id)arg2 resultInfoDict:(id)arg3 operation:(id)arg4;	// IMP=0x00000001005be1b4
- (void)reportCgiError:(id)arg1 action:(id)arg2 code:(long long)arg3 inner:(id)arg4 msg:(id)arg5 resultInfoDict:(id)arg6 operation:(id)arg7;	// IMP=0x00000001005bdfbc
- (void)reportHttpError:(id)arg1 action:(id)arg2 code:(long long)arg3 operation:(id)arg4;	// IMP=0x00000001005bde38
- (_Bool)isConcurrentTask:(unsigned long long)arg1;	// IMP=0x00000001005bddec
- (_Bool)doCommParse:(id)arg1 resp:(id)arg2;	// IMP=0x00000001005bdca0
- (long long)parseCommResp:(id)arg1 resp:(id)arg2;	// IMP=0x00000001005bdb90
- (_Bool)onHttpResp:(id)arg1;	// IMP=0x00000001005bd76c
- (void)callGetIpList:(id)arg1 orderInfo:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5;	// IMP=0x00000001005bccd8
- (void)callLogCgi:(id)arg1 orderInfo:(id)arg2 msg:(id)arg3 netErr:(CDUnknownBlockType)arg4 err:(CDUnknownBlockType)arg5 succ:(CDUnknownBlockType)arg6;	// IMP=0x00000001005bc978
- (void)callGetShortOpenidCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;	// IMP=0x00000001005bbf90
- (void)callMpInfoCgi:(id)arg1 netErr:(CDUnknownBlockType)arg2 err:(CDUnknownBlockType)arg3 succ:(CDUnknownBlockType)arg4;	// IMP=0x00000001005bb584
- (void)callNetCgi:(id)arg1;	// IMP=0x00000001005bb580
- (void)startReq:(unsigned long long)arg1 paramsContructor:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5 parserBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000001005bb304
- (void)dealloc;	// IMP=0x00000001005bb2cc

@end


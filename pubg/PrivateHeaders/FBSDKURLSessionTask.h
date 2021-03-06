//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSessionTask;

@interface FBSDKURLSessionTask : NSObject
{
    NSURLSessionTask *_task;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    unsigned long long _requestStartTime;	// 24 = 0x18
    unsigned long long _loggerSerialNumber;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned long long loggerSerialNumber; // @synthesize loggerSerialNumber=_loggerSerialNumber;
@property(nonatomic) unsigned long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x00000001006c5578
- (void)cancel;	// IMP=0x00000001006c54b0
- (void)start;	// IMP=0x00000001006c5470
- (void)taskDidCompleteWithError:(id)arg1;	// IMP=0x00000001006c52e4
- (void)taskDidCompleteWithResponse:(id)arg1 data:(id)arg2;	// IMP=0x00000001006c520c
- (void)logMessage:(id)arg1;	// IMP=0x00000001006c51c4
- (void)invokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4;	// IMP=0x00000001006c5024
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 response:(id)arg2 responseData:(id)arg3;	// IMP=0x00000001006c4e54
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x00000001006c4d20
- (id)init;	// IMP=0x00000001006c4c64
- (id)initWithRequest:(id)arg1 fromSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001006c49e8

@end


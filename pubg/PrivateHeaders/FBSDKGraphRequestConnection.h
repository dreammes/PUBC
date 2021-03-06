//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKGraphErrorRecoveryProcessorDelegate.h"
#import "NSURLSessionDataDelegate.h"

@class FBSDKGraphErrorRecoveryProcessor, FBSDKGraphRequestMetadata, FBSDKLogger, FBSDKURLSessionTask, NSHTTPURLResponse, NSMutableArray, NSOperationQueue, NSString, NSURLSession;

@interface FBSDKGraphRequestConnection : NSObject <NSURLSessionDataDelegate, FBSDKGraphErrorRecoveryProcessorDelegate>
{
    NSString *_overrideVersionPart;	// 8 = 0x8
    unsigned long long _expectingResults;	// 16 = 0x10
    NSOperationQueue *_delegateQueue;	// 24 = 0x18
    FBSDKGraphRequestMetadata *_recoveringRequestMetadata;	// 32 = 0x20
    FBSDKGraphErrorRecoveryProcessor *_errorRecoveryProcessor;	// 40 = 0x28
    id <FBSDKGraphRequestConnectionDelegate> _delegate;	// 48 = 0x30
    double _timeout;	// 56 = 0x38
    NSHTTPURLResponse *_URLResponse;	// 64 = 0x40
    NSURLSession *_session;	// 72 = 0x48
    FBSDKURLSessionTask *_task;	// 80 = 0x50
    NSMutableArray *_requests;	// 88 = 0x58
    unsigned long long _state;	// 96 = 0x60
    FBSDKLogger *_logger;	// 104 = 0x68
    unsigned long long _requestStartTime;	// 112 = 0x70
}

+ (id)userAgent;	// IMP=0x00000001006dc908
+ (void)setDefaultConnectionTimeout:(double)arg1;	// IMP=0x00000001006d77a8
@property(nonatomic) unsigned long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) FBSDKLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) FBSDKURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, retain, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) __weak id <FBSDKGraphRequestConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001006dd314
@property(readonly, copy) NSString *description;
- (void)processorDidAttemptRecovery:(id)arg1 didRecover:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001006dcbb4
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x00000001006dcb28
- (void)cleanUpSession;	// IMP=0x00000001006dcad0
- (id)defaultSession;	// IMP=0x00000001006dca54
- (void)registerTokenToOmitFromLog:(id)arg1;	// IMP=0x00000001006dc870
- (id)accessTokenWithRequest:(id)arg1;	// IMP=0x00000001006dc6cc
- (void)logRequest:(id)arg1 bodyLength:(unsigned long long)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4;	// IMP=0x00000001006dc3b8
- (id)errorWithCode:(long long)arg1 statusCode:(long long)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5;	// IMP=0x00000001006dc218
- (id)errorFromResult:(id)arg1 request:(id)arg2;	// IMP=0x00000001006dbafc
- (void)processResultDebugDictionary:(id)arg1;	// IMP=0x00000001006db848
- (void)processResultBody:(id)arg1 error:(id)arg2 metadata:(id)arg3 canNotifyDelegate:(_Bool)arg4;	// IMP=0x00000001006daea4
- (void)completeWithResults:(id)arg1 networkError:(id)arg2;	// IMP=0x00000001006da870
- (id)parseJSONOrOtherwise:(id)arg1 error:(id *)arg2;	// IMP=0x00000001006da700
- (id)parseJSONResponse:(id)arg1 error:(id *)arg2 statusCode:(long long)arg3;	// IMP=0x00000001006d9fc0
- (void)completeFBSDKURLSessionWithResponse:(id)arg1 data:(id)arg2 networkError:(id)arg3;	// IMP=0x00000001006d9a74
- (id)urlStringForSingleRequest:(id)arg1 forBatch:(_Bool)arg2;	// IMP=0x00000001006d95f4
- (id)requestWithBatch:(id)arg1 timeout:(double)arg2;	// IMP=0x00000001006d8f78
- (void)_validateFieldsParamForGetRequests:(id)arg1;	// IMP=0x00000001006d8c34
- (_Bool)_shouldWarnOnMissingFieldsParam:(id)arg1;	// IMP=0x00000001006d8b5c
- (void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4;	// IMP=0x00000001006d8808
- (void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(_Bool)arg3 logger:(id)arg4;	// IMP=0x00000001006d8534
- (void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 batchToken:(id)arg4;	// IMP=0x00000001006d8054
- (void)setDelegateQueue:(id)arg1;	// IMP=0x00000001006d8040
- (void)start;	// IMP=0x00000001006d7b20
- (void)overrideVersionPartWith:(id)arg1;	// IMP=0x00000001006d7aac
- (void)cancel;	// IMP=0x00000001006d7a44
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;	// IMP=0x00000001006d791c
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchEntryName:(id)arg3;	// IMP=0x00000001006d7810
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001006d77bc
- (void)dealloc;	// IMP=0x00000001006d774c
- (id)init;	// IMP=0x00000001006d765c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

@class NSArray, NSDictionary, NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOperation, NSString, OrderedDictionary, VKAccessToken, VKRequestTiming, VKResponse;

@interface VKRequest : VKObject
{
    NSObject<OS_dispatch_semaphore> *_waitUntilDoneSemaphore;	// 8 = 0x8
    double _waitMultiplier;	// 16 = 0x10
    _Bool _secure;	// 24 = 0x18
    _Bool _useSystemLanguage;	// 25 = 0x19
    _Bool _parseModel;	// 26 = 0x1a
    _Bool _debugTiming;	// 27 = 0x1b
    _Bool _waitUntilDone;	// 28 = 0x1c
    int _attempts;	// 32 = 0x20
    int _attemptsUsed;	// 36 = 0x24
    CDUnknownBlockType _progressBlock;	// 40 = 0x28
    CDUnknownBlockType _completeBlock;	// 48 = 0x30
    CDUnknownBlockType _errorBlock;	// 56 = 0x38
    long long _requestTimeout;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_responseQueue;	// 72 = 0x48
    NSString *_methodName;	// 80 = 0x50
    NSString *_httpMethod;	// 88 = 0x58
    NSDictionary *_methodParameters;	// 96 = 0x60
    NSOperation *_executionOperation;	// 104 = 0x68
    VKRequestTiming *_requestTiming;	// 112 = 0x70
    NSArray *_preventThisErrorsHandling;	// 120 = 0x78
    OrderedDictionary *_preparedParameters;	// 128 = 0x80
    NSString *_uploadUrl;	// 136 = 0x88
    NSMutableArray *_postRequestsQueue;	// 144 = 0x90
    Class _modelClass;	// 152 = 0x98
    NSArray *_photoObjects;	// 160 = 0xa0
    VKResponse *_response;	// 168 = 0xa8
    NSError *_error;	// 176 = 0xb0
    NSString *_requestLang;	// 184 = 0xb8
    VKAccessToken *_specialToken;	// 192 = 0xc0
}

+ (id)photoRequestWithPostUrl:(id)arg1 withPhotos:(id)arg2;	// IMP=0x0000000100b572f4
+ (id)requestWithMethod:(id)arg1 parameters:(id)arg2 modelClass:(Class)arg3;	// IMP=0x0000000100b57200
+ (id)requestWithMethod:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000100b5719c
+ (id)requestWithMethod:(id)arg1 andParameters:(id)arg2 modelClass:(Class)arg3;	// IMP=0x0000000100b57134
+ (id)requestWithMethod:(id)arg1 andParameters:(id)arg2 andHttpMethod:(id)arg3 classOfModel:(Class)arg4;	// IMP=0x0000000100b570b8
+ (id)requestWithMethod:(id)arg1 andParameters:(id)arg2;	// IMP=0x0000000100b57054
+ (id)requestWithMethod:(id)arg1 andParameters:(id)arg2 andHttpMethod:(id)arg3;	// IMP=0x0000000100b56fe0
+ (id)processingQueue;	// IMP=0x0000000100b56fd4
@property(retain, nonatomic) VKAccessToken *specialToken; // @synthesize specialToken=_specialToken;
@property(copy, nonatomic) NSString *requestLang; // @synthesize requestLang=_requestLang;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VKResponse *response; // @synthesize response=_response;
@property int attemptsUsed; // @synthesize attemptsUsed=_attemptsUsed;
@property(retain, nonatomic) NSArray *photoObjects; // @synthesize photoObjects=_photoObjects;
@property(retain, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(retain, nonatomic) NSMutableArray *postRequestsQueue; // @synthesize postRequestsQueue=_postRequestsQueue;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
@property(retain, nonatomic) OrderedDictionary *preparedParameters; // @synthesize preparedParameters=_preparedParameters;
@property(copy, nonatomic) NSArray *preventThisErrorsHandling; // @synthesize preventThisErrorsHandling=_preventThisErrorsHandling;
@property(retain, nonatomic) VKRequestTiming *requestTiming; // @synthesize requestTiming=_requestTiming;
@property(retain, nonatomic) NSOperation *executionOperation; // @synthesize executionOperation=_executionOperation;
@property(retain, nonatomic) NSDictionary *methodParameters; // @synthesize methodParameters=_methodParameters;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(nonatomic) _Bool waitUntilDone; // @synthesize waitUntilDone=_waitUntilDone;
@property(nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(nonatomic) long long requestTimeout; // @synthesize requestTimeout=_requestTimeout;
@property(nonatomic) _Bool debugTiming; // @synthesize debugTiming=_debugTiming;
@property(nonatomic) _Bool parseModel; // @synthesize parseModel=_parseModel;
@property(nonatomic) _Bool useSystemLanguage; // @synthesize useSystemLanguage=_useSystemLanguage;
@property(nonatomic) _Bool secure; // @synthesize secure=_secure;
@property(nonatomic) int attempts; // @synthesize attempts=_attempts;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;	// IMP=0x0000000100b5a434
@property(readonly, nonatomic) _Bool isExecuting;
- (void)setPreferredLang:(id)arg1;	// IMP=0x0000000100b5a074
- (id)language;	// IMP=0x0000000100b59dcc
- (_Bool)processCommonError:(id)arg1;	// IMP=0x0000000100b5981c
- (id)generateSig:(id)arg1 token:(id)arg2;	// IMP=0x0000000100b5953c
- (void)addExtraParameters:(id)arg1;	// IMP=0x0000000100b59494
- (void)setupProgress:(id)arg1;	// IMP=0x0000000100b59224
- (void)cancel;	// IMP=0x0000000100b590f8
- (void)repeat;	// IMP=0x0000000100b59098
- (void)finishRequest;	// IMP=0x0000000100b58c88
- (void)provideError:(id)arg1;	// IMP=0x0000000100b58bc4
- (void)provideResponse:(id)arg1 responseString:(id)arg2;	// IMP=0x0000000100b58820
- (void)operationDidStart:(id)arg1;	// IMP=0x0000000100b5878c
- (void)start;	// IMP=0x0000000100b5850c
- (id)createExecutionOperation;	// IMP=0x0000000100b57e34
- (id)getPreparedRequest;	// IMP=0x0000000100b57728
- (void)addPostRequest:(id)arg1;	// IMP=0x0000000100b576ac
- (void)executeAfter:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100b575fc
- (void)executeWithResultBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b5751c
- (id)debugDescription;	// IMP=0x0000000100b57474
- (id)init;	// IMP=0x0000000100b573b0
- (void)dealloc;	// IMP=0x0000000100b56f44

@end


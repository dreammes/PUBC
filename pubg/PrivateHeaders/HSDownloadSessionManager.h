//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession, NSURLSessionConfiguration;

@interface HSDownloadSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    NSURLSessionConfiguration *_sessionConfiguration;	// 8 = 0x8
    NSURLSession *_session;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_barrierQueue;	// 24 = 0x18
    NSMutableDictionary *_downloadTasksMappingWithHandlers;	// 32 = 0x20
}

+ (id)shared;	// IMP=0x0000000101350798
+ (id)defaultSessionConfiguration;	// IMP=0x0000000101350720
@property(retain, nonatomic) NSMutableDictionary *downloadTasksMappingWithHandlers; // @synthesize downloadTasksMappingWithHandlers=_downloadTasksMappingWithHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
- (void).cxx_destruct;	// IMP=0x00000001013516d0
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010135156c
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x00000001013514b8
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000001013513e8
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000101351284
- (void)removeHandlersForTask:(id)arg1;	// IMP=0x00000001013510d0
- (CDUnknownBlockType)completionHandlerForTask:(id)arg1;	// IMP=0x0000000101351074
- (CDUnknownBlockType)progressHandlerForTask:(id)arg1;	// IMP=0x0000000101351018
- (id)handlersForTask:(id)arg1;	// IMP=0x0000000101350da8
- (id)downloadTaskWithURL:(id)arg1 resumeData:(id)arg2 progress:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000101350da0
- (id)downloadTaskWithURL:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101350a64
- (id)initWithSessionConfiguration:(id)arg1;	// IMP=0x00000001013508b4
- (id)init;	// IMP=0x0000000101350850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


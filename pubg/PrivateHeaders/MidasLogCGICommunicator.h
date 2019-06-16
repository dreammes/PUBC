//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionTaskDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface MidasLogCGICommunicator : NSObject <NSURLSessionTaskDelegate>
{
    NSString *_uploadUrl;	// 8 = 0x8
    double _timeout;	// 16 = 0x10
    NSString *_dateTime;	// 24 = 0x18
    NSString *_fileName;	// 32 = 0x20
    NSString *_appId;	// 40 = 0x28
    NSString *_userId;	// 48 = 0x30
    long long _maxCount;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSMutableDictionary *_uploadTasks;	// 72 = 0x48
    NSMutableDictionary *_uploadFilePair;	// 80 = 0x50
    NSURLSession *_uploadSession;	// 88 = 0x58
    NSString *_tempDirectory;	// 96 = 0x60
}

@property(copy, nonatomic) NSString *tempDirectory; // @synthesize tempDirectory=_tempDirectory;
@property(retain, nonatomic) NSURLSession *uploadSession; // @synthesize uploadSession=_uploadSession;
@property(retain, nonatomic) NSMutableDictionary *uploadFilePair; // @synthesize uploadFilePair=_uploadFilePair;
@property(retain, nonatomic) NSMutableDictionary *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *dateTime; // @synthesize dateTime=_dateTime;
- (void).cxx_destruct;	// IMP=0x000000010058b7d8
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010058ac38
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x000000010058a7b0
- (void)_cleanUp:(id)arg1;	// IMP=0x000000010058a1fc
- (void)_doSendFiles:(id)arg1;	// IMP=0x000000010058959c
- (void)_uploadFiles:(id)arg1;	// IMP=0x0000000100589008
- (id)_getFilePath;	// IMP=0x0000000100588b84
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
- (void)startUpload;	// IMP=0x00000001005882e4
- (id)initWithFileName:(id)arg1 maxCount:(long long)arg2 appId:(id)arg3 userId:(id)arg4;	// IMP=0x000000010058802c
- (id)initWithDate:(id)arg1 maxCount:(long long)arg2 appId:(id)arg3 userId:(id)arg4;	// IMP=0x0000000100587d74
- (id)init;	// IMP=0x0000000100587d3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

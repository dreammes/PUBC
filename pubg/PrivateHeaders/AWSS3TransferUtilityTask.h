//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSHTTPURLResponse, NSProgress, NSString, NSURL, NSURLRequest, NSURLSessionTask;

@interface AWSS3TransferUtilityTask : NSObject
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSProgress *_progress;	// 24 = 0x18
    NSURLSessionTask *_sessionTask;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    NSURL *_location;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *location; // @synthesize location=_location;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c27238
@property(readonly) NSHTTPURLResponse *response;
@property(readonly) NSURLRequest *request;
- (void)suspend;	// IMP=0x0000000100c26fd8
- (void)resume;	// IMP=0x0000000100c26f98
- (void)cancel;	// IMP=0x0000000100c26f58
@property(readonly) unsigned long long taskIdentifier;
- (id)init;	// IMP=0x0000000100c26e94

@end


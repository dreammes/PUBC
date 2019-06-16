//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HSIndexFileModel : NSObject
{
    NSObject<OS_dispatch_queue> *workerQueue;	// 8 = 0x8
}

+ (void)dropAllAndReinitialize;	// IMP=0x00000001013a078c
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;	// IMP=0x00000001013a0670
+ (id)loadIndex;	// IMP=0x00000001013a0318
+ (void)cleanUpOldIndexes;	// IMP=0x00000001013a0004
+ (void)deleteIndexWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010139fda4
+ (void)storeIndex:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010139fb68
+ (id)newIndexFile;	// IMP=0x000000010139f91c
+ (_Bool)initIndexFiles;	// IMP=0x000000010139f6a4
+ (id)sharedInstance;	// IMP=0x000000010139f5cc
- (void).cxx_destruct;	// IMP=0x00000001013a07c8

@end

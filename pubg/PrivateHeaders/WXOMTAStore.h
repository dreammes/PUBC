//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface WXOMTAStore : NSObject
{
    struct dispatch_queue_s *task_queue;	// 8 = 0x8
    struct sqlite3 *db;	// 16 = 0x10
    unsigned int numStoredEvents;	// 24 = 0x18
    _Bool _isSendingCacheEvent;	// 28 = 0x1c
    _Bool _isSendingMemCacheEvent;	// 29 = 0x1d
    NSLock *cacheEventLock;	// 32 = 0x20
    NSLock *_cacheMemEventLock;	// 40 = 0x28
    NSMutableArray *_cachedEventsArr;	// 48 = 0x30
}

+ (id)getInstance;	// IMP=0x000000010154511c
@property(retain) NSMutableArray *cachedEventsArr; // @synthesize cachedEventsArr=_cachedEventsArr;
@property _Bool isSendingMemCacheEvent; // @synthesize isSendingMemCacheEvent=_isSendingMemCacheEvent;
@property(retain) NSLock *cacheMemEventLock; // @synthesize cacheMemEventLock=_cacheMemEventLock;
@property _Bool isSendingCacheEvent; // @synthesize isSendingCacheEvent=_isSendingCacheEvent;
@property(retain) NSLock *cacheEventLock; // @synthesize cacheEventLock;
- (void).cxx_destruct;	// IMP=0x0000000101545268
- (void)sendCachedEvents:(int)arg1;	// IMP=0x0000000101544964
- (void)sendMemCachedEvents:(int)arg1;	// IMP=0x00000001015444f8
- (void)storeEvent:(id)arg1 hasTrySent:(_Bool)arg2 CB:(CDUnknownBlockType)arg3;	// IMP=0x0000000101543ff0
- (void)loadConfig:(CDUnknownBlockType)arg1;	// IMP=0x0000000101543d44
- (void)storeConfig:(id)arg1;	// IMP=0x0000000101543a14
- (void)loadCachedEvents:(id)arg1;	// IMP=0x0000000101543390
- (void)loadMemCachedEvents:(id)arg1;	// IMP=0x000000010154314c
- (unsigned int)storedEventCount;	// IMP=0x000000010154313c
- (id)loadUser;	// IMP=0x0000000101542b04
- (void)storeUser:(id)arg1;	// IMP=0x00000001015428fc
- (void)updateEvents:(id)arg1 status:(unsigned int)arg2;	// IMP=0x0000000101542510
- (void)updateSendFailedEvents:(id)arg1;	// IMP=0x0000000101541f54
- (void)deleteEvents:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000101541b18
- (unsigned int)getStoredEventsNum;	// IMP=0x000000010154199c
- (id)getMtaOpenUDID;	// IMP=0x0000000101541744
- (int)updateDatabase:(const char *)arg1;	// IMP=0x00000001015415e8
- (void)deleteDB;	// IMP=0x00000001015414f4
- (void)closeDB;	// IMP=0x00000001015414c0
- (struct sqlite3 *)getDB;	// IMP=0x0000000101541430
- (id)getMTAStorePath;	// IMP=0x00000001015413a8
- (id)getDbPath;	// IMP=0x00000001015410c4
- (void)initDB;	// IMP=0x0000000101540fe8
- (void)launch;	// IMP=0x0000000101540ed4
- (void)dealloc;	// IMP=0x0000000101540e70
- (id)init;	// IMP=0x0000000101540d40

@end

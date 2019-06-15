//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsSessionStorage.h"

@interface HsSessionDbStorage : NSObject <HsSessionStorage>
{
}

- (id)getAllSessionsWithStatus:(short)arg1;	// IMP=0x000000010138ec68
- (id)getAllSessions;	// IMP=0x000000010138e8f8
- (void)cleanUpInvalidSessions;	// IMP=0x000000010138e830
- (id)getSession:(id)arg1;	// IMP=0x000000010138e554
- (void)removeSessions:(id)arg1;	// IMP=0x000000010138e3c8
- (void)setSyncStatus:(short)arg1 forSessions:(id)arg2;	// IMP=0x000000010138e224
- (void)updateSession:(id)arg1;	// IMP=0x000000010138df68
- (void)storeSession:(id)arg1;	// IMP=0x000000010138dac0
- (void)destroyStorage;	// IMP=0x000000010138da00
- (void)initStorage;	// IMP=0x000000010138d784
- (id)getSessionModelFromCursor:(id)arg1;	// IMP=0x000000010138d0f4

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTMLogFilter.h"

@class NSString, NSUserDefaults;

@interface GTMLogLevelFilter : NSObject <GTMLogFilter>
{
    _Bool verboseLoggingEnabled_;	// 8 = 0x8
    NSUserDefaults *userDefaults_;	// 16 = 0x10
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001009299dc
- (_Bool)filterAllowsMessage:(id)arg1 level:(int)arg2;	// IMP=0x0000000100929984
- (void)dealloc;	// IMP=0x000000010092990c
- (id)init;	// IMP=0x000000010092974c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


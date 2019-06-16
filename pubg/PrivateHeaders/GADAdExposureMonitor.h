//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADViewMonitorDelegate.h"

@class GADViewMonitor, NSString, UIView;

@interface GADAdExposureMonitor : NSObject <GADViewMonitorDelegate>
{
    NSString *_adUnitID;	// 8 = 0x8
    UIView *_monitoredView;	// 16 = 0x10
    GADViewMonitor *_viewMonitor;	// 24 = 0x18
    _Bool _adUnitExposureBegan;	// 32 = 0x20
    id _SDKCoreConstantsObserver;	// 40 = 0x28
    _Bool _viewMonitorDidStartMonitoring;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100940368
- (void)viewMonitorDidRefresh:(id)arg1;	// IMP=0x00000001009401b0
- (void)finishMonitoring;	// IMP=0x000000010093fffc
- (void)startMonitoring;	// IMP=0x000000010093fe50
- (void)dealloc;	// IMP=0x000000010093fdb4
- (id)initWithView:(id)arg1 adUnitID:(id)arg2;	// IMP=0x000000010093fba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

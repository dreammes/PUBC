//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class NSArray, UITableView;

@interface TWTRTableViewProxy : NSProxy
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _isEnabled;	// 9 = 0x9
    UITableView *_tableView;	// 16 = 0x10
    NSArray *_selectorsToProxy;	// 24 = 0x18
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSArray *selectorsToProxy; // @synthesize selectorsToProxy=_selectorsToProxy;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x000000010085664c
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000100856438
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000001008563dc
- (id)initWithTableView:(id)arg1 selectorsToProxy:(id)arg2;	// IMP=0x0000000100856328

// Remaining properties
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;

@end


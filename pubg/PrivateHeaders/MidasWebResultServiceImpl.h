//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasWebResultService.h"

@class MidasResultWebViewController, NSString;

@interface MidasWebResultServiceImpl : NSObject <MidasWebResultService>
{
    MidasResultWebViewController *_ctrl;	// 8 = 0x8
}

+ (void)load;	// IMP=0x00000001005aef38
@property(retain, nonatomic) MidasResultWebViewController *ctrl; // @synthesize ctrl=_ctrl;
- (void).cxx_destruct;	// IMP=0x00000001005af080
- (void)showPageWithOperation:(id)arg1 webViewClosedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001005aefb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasIAPPayDelegate.h"

@class MidasIAPMpInfoReq, NSMutableArray, NSString;

@interface MidasMpInfoDelegater : NSObject <MidasIAPPayDelegate>
{
    NSMutableArray *_parent;	// 8 = 0x8
    MidasIAPMpInfoReq *_req;	// 16 = 0x10
}

@property(retain, nonatomic) MidasIAPMpInfoReq *req; // @synthesize req=_req;
@property(nonatomic) __weak NSMutableArray *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;	// IMP=0x0000000100525310
- (id)requestInfo;	// IMP=0x0000000100524f18
- (void)onResp:(id)arg1;	// IMP=0x0000000100524ad0
- (void)needLogin;	// IMP=0x000000010052498c
- (void)dealloc;	// IMP=0x0000000100524954

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

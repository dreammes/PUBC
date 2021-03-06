//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleConcurrentOperation.h"

@class NSString, VungleConfigController;

@interface VungleConfigOperation : VungleConcurrentOperation
{
    _Bool _backgroundInit;	// 24 = 0x18
    VungleConfigController *_configController;	// 32 = 0x20
    NSString *_userAgent;	// 40 = 0x28
}

@property(nonatomic) _Bool backgroundInit; // @synthesize backgroundInit=_backgroundInit;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) __weak VungleConfigController *configController; // @synthesize configController=_configController;
- (void).cxx_destruct;	// IMP=0x0000000100af0c44
- (void)start;	// IMP=0x0000000100af0964
- (id)initWithConfigController:(id)arg1 userAgent:(id)arg2 backgroundInit:(_Bool)arg3 resultBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100af0898

@end


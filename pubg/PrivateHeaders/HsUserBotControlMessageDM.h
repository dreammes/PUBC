//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsAutoRetriableMessageDM.h"

@class NSString;

@interface HsUserBotControlMessageDM : HsAutoRetriableMessageDM
{
    unsigned long long _action;	// 8 = 0x8
    NSString *_botInfo;	// 16 = 0x10
    NSString *_refersMessageId;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
}

@property(retain) NSString *reason; // @synthesize reason=_reason;
@property(retain) NSString *refersMessageId; // @synthesize refersMessageId=_refersMessageId;
@property(retain) NSString *botInfo; // @synthesize botInfo=_botInfo;
@property unsigned long long action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001013f3f90
- (id)botActionStringFromAction:(unsigned long long)arg1;	// IMP=0x00000001013f3ea4
- (_Bool)isUISupported;	// IMP=0x00000001013f3e9c
- (void)sendAutoRetriableDMWithUser:(id)arg1 conversationServerInfo:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001013f3990
- (void)merge:(id)arg1;	// IMP=0x00000001013f3838
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 action:(unsigned long long)arg4 reason:(id)arg5 botInfo:(id)arg6 refersMessageId:(id)arg7 syncState:(unsigned long long)arg8;	// IMP=0x00000001013f36d4

@end


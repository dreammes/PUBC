//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface CreateChatRoomReq : BaseReq
{
    NSString *groupId;	// 24 = 0x18
    NSString *chatRoomName;	// 32 = 0x20
    NSString *extMsg;	// 40 = 0x28
    NSString *chatRoomNickName;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *chatRoomNickName; // @synthesize chatRoomNickName;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId;
- (void)dealloc;	// IMP=0x0000000101518bdc

@end


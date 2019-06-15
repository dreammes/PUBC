//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsImageAttachmentMessageDM.h"

@class NSString;

@interface HsUserImageAttachmentMessageDM : HsImageAttachmentMessageDM
{
    unsigned long long _state;	// 8 = 0x8
    NSString *_refersMessageId;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *refersMessageId; // @synthesize refersMessageId=_refersMessageId;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x00000001013e0550
- (void)handleTapWithConversationListener:(id)arg1;	// IMP=0x00000001013e0444
- (void)deleteAttachment;	// IMP=0x00000001013e03b4
- (id)attachmentDisplayImage;	// IMP=0x00000001013e021c
- (void)checkAndReDownloadImage;	// IMP=0x00000001013dfcd4
- (void)merge:(id)arg1;	// IMP=0x00000001013dfb54
- (void)updateState:(_Bool)arg1;	// IMP=0x00000001013dfab8
- (void)uploadImageWithUser:(id)arg1 conversationServerInfo:(id)arg2 shouldCompressImage:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000001013def00
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 imageRemoteURL:(id)arg4 imageLocalName:(id)arg5 fileExtension:(id)arg6 thumbnailURL:(id)arg7 contentType:(id)arg8 isSecureAttachment:(_Bool)arg9 size:(long long)arg10;	// IMP=0x00000001013decd4

@end


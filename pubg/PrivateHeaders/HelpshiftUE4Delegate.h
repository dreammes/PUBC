//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HelpshiftSupportDelegate.h"

@class NSString;

@interface HelpshiftUE4Delegate : NSObject <HelpshiftSupportDelegate>
{
    CDUnknownFunctionPointerType _unreadMessagesCountHandler;	// 8 = 0x8
    CDUnknownFunctionPointerType _sessionBeganHandler;	// 16 = 0x10
    CDUnknownFunctionPointerType _sessionEndedHandler;	// 24 = 0x18
    CDUnknownFunctionPointerType _newConversationHandler;	// 32 = 0x20
    CDUnknownFunctionPointerType _newConversationMessageHandler;	// 40 = 0x28
    CDUnknownFunctionPointerType _csatCompletedHandler;	// 48 = 0x30
    CDUnknownFunctionPointerType _conversationEndedHandler;	// 56 = 0x38
    CDUnknownFunctionPointerType _checkIfConversationActiveHandler;	// 64 = 0x40
    CDUnknownFunctionPointerType _authenticationFailureHandler;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x00000001018f788c
@property(nonatomic) CDUnknownFunctionPointerType authenticationFailureHandler; // @synthesize authenticationFailureHandler=_authenticationFailureHandler;
@property(nonatomic) CDUnknownFunctionPointerType checkIfConversationActiveHandler; // @synthesize checkIfConversationActiveHandler=_checkIfConversationActiveHandler;
@property(nonatomic) CDUnknownFunctionPointerType conversationEndedHandler; // @synthesize conversationEndedHandler=_conversationEndedHandler;
@property(nonatomic) CDUnknownFunctionPointerType csatCompletedHandler; // @synthesize csatCompletedHandler=_csatCompletedHandler;
@property(nonatomic) CDUnknownFunctionPointerType newConversationMessageHandler; // @synthesize newConversationMessageHandler=_newConversationMessageHandler;
@property(nonatomic) CDUnknownFunctionPointerType newConversationHandler; // @synthesize newConversationHandler=_newConversationHandler;
@property(nonatomic) CDUnknownFunctionPointerType sessionEndedHandler; // @synthesize sessionEndedHandler=_sessionEndedHandler;
@property(nonatomic) CDUnknownFunctionPointerType sessionBeganHandler; // @synthesize sessionBeganHandler=_sessionBeganHandler;
@property(nonatomic) CDUnknownFunctionPointerType unreadMessagesCountHandler; // @synthesize unreadMessagesCountHandler=_unreadMessagesCountHandler;
- (void)authenticationFailedForUser:(id)arg1 withReason:(int)arg2;	// IMP=0x00000001018f7d2c
- (void)didCheckIfConversationActive:(_Bool)arg1;	// IMP=0x00000001018f7cb0
- (void)conversationEnded;	// IMP=0x00000001018f7c40
- (void)userCompletedCustomerSatisfactionSurvey:(long long)arg1 withFeedback:(id)arg2;	// IMP=0x00000001018f7b90
- (void)userRepliedToConversationWithMessage:(id)arg1;	// IMP=0x00000001018f7af8
- (void)newConversationStartedWithMessage:(id)arg1;	// IMP=0x00000001018f7a60
- (void)helpshiftSupportSessionHasEnded;	// IMP=0x00000001018f79f0
- (void)helpshiftSupportSessionHasBegun;	// IMP=0x00000001018f7980
- (void)didReceiveUnreadMessagesCount:(long long)arg1;	// IMP=0x00000001018f7904

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

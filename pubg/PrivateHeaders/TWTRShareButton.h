//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "TWTRScribableView.h"

@class NSString, TWTRTweet, UIViewController;

@interface TWTRShareButton : UIButton <TWTRScribableView>
{
    unsigned long long _scribeViewName;	// 8 = 0x8
    UIViewController *_presenterViewController;	// 16 = 0x10
    TWTRTweet *_tweet;	// 24 = 0x18
    long long _shareButtonSize;	// 32 = 0x20
}

@property(nonatomic) long long shareButtonSize; // @synthesize shareButtonSize=_shareButtonSize;
@property(retain, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(nonatomic) unsigned long long scribeViewName; // @synthesize scribeViewName=_scribeViewName;
- (void).cxx_destruct;	// IMP=0x00000001008533ac
- (_Bool)shouldPresentShareSheetUsingPopover;	// IMP=0x00000001008532d0
- (void)presentActivityViewController:(id)arg1;	// IMP=0x0000000100853190
- (void)shareButtonTapped;	// IMP=0x0000000100852de0
- (void)configureWithTweet:(id)arg1;	// IMP=0x0000000100852d4c
- (void)shareButtonCommonInit;	// IMP=0x0000000100852c20
- (id)initWithFrame:(struct CGRect)arg1 shareButtonSize:(long long)arg2;	// IMP=0x0000000100852bb4
- (id)initWithShareButtonSize:(long long)arg1;	// IMP=0x0000000100852b98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100852b88
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100852b20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

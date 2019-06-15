//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TWTRVideoDeeplinkConfiguration, UIButton;

@interface TWTRVideoCTAView : UIView
{
    id <TWTRVideoCTAViewDelegate> _delegate;	// 8 = 0x8
    UIButton *_CTAButton;	// 16 = 0x10
    TWTRVideoDeeplinkConfiguration *_deeplinkConfiguration;	// 24 = 0x18
}

+ (id)borderImage;	// IMP=0x0000000100846c74
@property(readonly, nonatomic) TWTRVideoDeeplinkConfiguration *deeplinkConfiguration; // @synthesize deeplinkConfiguration=_deeplinkConfiguration;
@property(readonly, nonatomic) UIButton *CTAButton; // @synthesize CTAButton=_CTAButton;
@property(nonatomic) __weak id <TWTRVideoCTAViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100847098
- (void)fireMetricsCallForMetricsURL:(id)arg1;	// IMP=0x0000000100846fb0
- (void)handleDeeplinkButton;	// IMP=0x0000000100846ddc
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100846d80
- (id)makeButtonWithTitle:(id)arg1;	// IMP=0x0000000100846abc
- (id)initWithFrame:(struct CGRect)arg1 deeplinkConfiguration:(id)arg2;	// IMP=0x00000001008468c4

@end


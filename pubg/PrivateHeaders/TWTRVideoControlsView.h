//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel, UISlider;

@interface TWTRVideoControlsView : UIView
{
    UILabel *_timeLabel;	// 8 = 0x8
    UISlider *_scrubber;	// 16 = 0x10
    UIButton *_controlButton;	// 24 = 0x18
}

@property(readonly, nonatomic) UIButton *controlButton; // @synthesize controlButton=_controlButton;
@property(readonly, nonatomic) UISlider *scrubber; // @synthesize scrubber=_scrubber;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;	// IMP=0x000000010082d5b8
- (void)prepareSubviews;	// IMP=0x000000010082cfd4
- (void)updateButtonImageForState:(long long)arg1;	// IMP=0x000000010082cf0c
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010082cef4
- (void)updateTintColorForSubviews;	// IMP=0x000000010082cdc0
- (void)tintColorDidChange;	// IMP=0x000000010082cd6c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010082cd10

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface TssVerticalAlignedLabel : UILabel
{
    int verticalAlignment;	// 8 = 0x8
}

@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment;
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000100e0cc6c
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;	// IMP=0x0000000100e0cbb8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100e0cb5c

@end


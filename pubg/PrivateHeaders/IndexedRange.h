//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextRange.h"

@interface IndexedRange : UITextRange
{
    struct _NSRange _range;	// 8 = 0x8
}

+ (id)rangeWithNSRange:(struct _NSRange)arg1;	// IMP=0x000000010234cabc
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEmpty;	// IMP=0x000000010234cbcc
- (id)end;	// IMP=0x000000010234cb70
- (id)start;	// IMP=0x000000010234cb34

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TWTRTweetPresenter : NSObject
{
    unsigned long long _style;	// 8 = 0x8
}

+ (id)presenterForStyle:(unsigned long long)arg1;	// IMP=0x0000000100838940
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)entityRangesSortedByPosition:(id)arg1;	// IMP=0x0000000100839e44
- (id)entitiesForTweet:(id)arg1 types:(long long)arg2;	// IMP=0x0000000100839c30
- (id)entityRangesForTweet:(id)arg1 types:(long long)arg2;	// IMP=0x00000001008397d8
- (double)aspectRatioForMultiphotoDisplayOfTweet:(id)arg1;	// IMP=0x00000001008396e8
- (double)aspectRatioForStyleFromAverageRatio:(double)arg1;	// IMP=0x00000001008396b0
- (double)mediaAspectRatioForTweetWithSingleMediaEntity:(id)arg1;	// IMP=0x0000000100839508
- (double)mediaAspectRatioForTweet:(id)arg1;	// IMP=0x0000000100839450
- (id)stripWhitespaceFromText:(id)arg1;	// IMP=0x00000001008393c0
- (id)stripCardEntity:(id)arg1 fromText:(id)arg2;	// IMP=0x0000000100839328
- (id)stripQuoteTweetURLForTweetID:(id)arg1 entities:(id)arg2 fromText:(id)arg3;	// IMP=0x0000000100839024
- (id)replaceDisplayURLs:(id)arg1 fromText:(id)arg2;	// IMP=0x0000000100838e68
- (id)stripLastImage:(id)arg1 fromText:(id)arg2;	// IMP=0x0000000100838db8
- (id)attributedTextForText:(id)arg1 withEntityRanges:(id)arg2;	// IMP=0x0000000100838d60
- (id)textForTweet:(id)arg1;	// IMP=0x0000000100838ac4
- (id)retweetedByTextForRetweet:(id)arg1;	// IMP=0x00000001008389cc
- (id)initWithTweetViewStyle:(unsigned long long)arg1;	// IMP=0x0000000100838978

@end

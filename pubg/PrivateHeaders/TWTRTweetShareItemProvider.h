//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityItemProvider.h"

@class TWTRTweet;

@interface TWTRTweetShareItemProvider : UIActivityItemProvider
{
    TWTRTweet *_tweet;	// 24 = 0x18
}

@property(retain, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
- (void).cxx_destruct;	// IMP=0x000000010081a8f0
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x000000010081a7c0
- (id)item;	// IMP=0x000000010081a628
- (id)initWithTweet:(id)arg1;	// IMP=0x000000010081a5a8

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TWTRTimelineParser : NSObject
{
}

+ (id)orderedTweetIDsFromCollectionOrderingResponse:(id)arg1;	// IMP=0x0000000100876b04
+ (id)minPositionFromCollectionAPIResponseDictionary:(id)arg1;	// IMP=0x0000000100876a08
+ (id)tweetsFromSearchAPIResponseDictionary:(id)arg1;	// IMP=0x0000000100876948
+ (id)lastTweetIDFromTweets:(id)arg1;	// IMP=0x00000001008768f0
+ (id)tweetsByID:(id)arg1;	// IMP=0x00000001008766f0
+ (id)orderTweets:(id)arg1 accordingToIDs:(id)arg2;	// IMP=0x0000000100876520
+ (void)hydrateSubTweetWithKey:(id)arg1 forTweet:(id)arg2 withUsers:(id)arg3;	// IMP=0x0000000100876428
+ (id)hyrdrateTweet:(id)arg1 withUserFromUsers:(id)arg2;	// IMP=0x00000001008762ec
+ (id)tweetsFromCollectionAPIResponseDictionary:(id)arg1;	// IMP=0x0000000100875f18

@end


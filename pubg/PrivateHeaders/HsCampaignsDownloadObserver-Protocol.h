//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsCampaignSyncModel, NSString, NSURL;

@protocol HsCampaignsDownloadObserver <NSObject>
- (void)downloadFailedForIconImageForCampaign:(NSString *)arg1;
- (void)downloadCompleteForIconImageForCampaign:(NSString *)arg1 atURL:(NSURL *)arg2;
- (void)downloadFailedForCoverImageForCampaign:(NSString *)arg1;
- (void)downloadCompleteForCoverImageForCampaign:(NSString *)arg1 atURL:(NSURL *)arg2;
- (void)downloadFailedForCampaign:(NSString *)arg1;
- (void)downloadCompleteForCampaign:(HsCampaignSyncModel *)arg1 atURL:(NSURL *)arg2;
- (void)downloadStartedForCampaign:(NSString *)arg1;
@end


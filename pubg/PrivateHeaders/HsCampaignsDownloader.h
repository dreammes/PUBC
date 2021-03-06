//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsCampaignSyncModelObserver.h"
#import "HsCampaignsDbObserver.h"

@class HSDownloadManager, NSString;

@interface HsCampaignsDownloader : NSObject <HsCampaignSyncModelObserver, HsCampaignsDbObserver>
{
    id <HsCampaignsDownloadObserver> _delegate;	// 8 = 0x8
    HSDownloadManager *_downloadManager;	// 16 = 0x10
    id <HsCampaignsStorage> _campaignStorage;	// 24 = 0x18
    id <HsCampaignSyncModelStorage> _syncModelStorage;	// 32 = 0x20
}

@property(retain, nonatomic) id <HsCampaignSyncModelStorage> syncModelStorage; // @synthesize syncModelStorage=_syncModelStorage;
@property(retain, nonatomic) id <HsCampaignsStorage> campaignStorage; // @synthesize campaignStorage=_campaignStorage;
@property(retain, nonatomic) HSDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) id <HsCampaignsDownloadObserver> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010142a7f4
- (void)campaignSeen:(id)arg1;	// IMP=0x000000010142a760
- (void)campaignSynced:(id)arg1;	// IMP=0x000000010142a75c
- (void)campaignDetailModelAdded:(id)arg1;	// IMP=0x000000010142a46c
- (void)downloadIconImageForUrl:(id)arg1 ofCampaign:(id)arg2;	// IMP=0x000000010142a250
- (void)downloadCoverImageForUrl:(id)arg1 ofCampaign:(id)arg2;	// IMP=0x000000010142a034
- (void)campaignAdded:(id)arg1;	// IMP=0x0000000101429d4c
- (void)fetchCampaign:(id)arg1;	// IMP=0x0000000101429d40
- (void)dealloc;	// IMP=0x0000000101429c94
- (id)initWithSyncModelStorage:(id)arg1 andCampaignsStorage:(id)arg2;	// IMP=0x0000000101429b40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


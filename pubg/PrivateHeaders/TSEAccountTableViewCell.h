//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSEBaseTableViewCell.h"

@class TSEAccountTableViewCellAvatarImageView, UILabel, UIView;

@interface TSEAccountTableViewCell : TSEBaseTableViewCell
{
    TSEAccountTableViewCellAvatarImageView *_avatarImageView;	// 8 = 0x8
    UILabel *_fullNameLabel;	// 16 = 0x10
    UILabel *_usernameLabel;	// 24 = 0x18
    UIView *_nameLabelsContainer;	// 32 = 0x20
    id <TSEImageDownloader> _imageDownloader;	// 40 = 0x28
    id _lastImageDownloadToken;	// 48 = 0x30
    id _lastProvidedAccountOrUser;	// 56 = 0x38
}

@property(retain, nonatomic) id lastProvidedAccountOrUser; // @synthesize lastProvidedAccountOrUser=_lastProvidedAccountOrUser;
@property(retain, nonatomic) id lastImageDownloadToken; // @synthesize lastImageDownloadToken=_lastImageDownloadToken;
@property(retain, nonatomic) id <TSEImageDownloader> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) UIView *nameLabelsContainer; // @synthesize nameLabelsContainer=_nameLabelsContainer;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(readonly, nonatomic) TSEAccountTableViewCellAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;	// IMP=0x00000001008948e0
- (void)configureWithAccount:(id)arg1 isSelected:(_Bool)arg2 imageDownloader:(id)arg3 networking:(id)arg4;	// IMP=0x00000001008944e8
- (void)configureWithHydratedUser:(id)arg1 isSelected:(_Bool)arg2 imageDownloader:(id)arg3;	// IMP=0x0000000100893f5c
- (void)cancelLastDownload;	// IMP=0x0000000100893e9c
- (void)prepareForReuse;	// IMP=0x0000000100893d7c
- (void)setUpConstraints;	// IMP=0x00000001008930a8
- (id)init;	// IMP=0x0000000100892c38

@end


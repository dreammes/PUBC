//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSETweetAttachment.h"

@class NSString, UIImage;

@interface TSETweetAttachmentImage : NSObject <TSETweetAttachment>
{
    UIImage *_image;	// 8 = 0x8
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;	// IMP=0x0000000100886498
- (id)initWithImage:(id)arg1;	// IMP=0x0000000100886404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


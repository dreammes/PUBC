//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

@class NSString, VKApiObject, VKRequest;

@interface VKResponse : VKObject
{
    VKRequest *_request;	// 8 = 0x8
    id _json;	// 16 = 0x10
    VKApiObject *_parsedModel;	// 24 = 0x18
    NSString *_responseString;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) VKApiObject *parsedModel; // @synthesize parsedModel=_parsedModel;
@property(retain, nonatomic) id json; // @synthesize json=_json;
@property(nonatomic) __weak VKRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;	// IMP=0x0000000100b49024
- (id)description;	// IMP=0x0000000100b48f0c

@end


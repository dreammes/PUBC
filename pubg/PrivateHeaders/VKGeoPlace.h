//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObject.h"

@class NSNumber, NSString;

@interface VKGeoPlace : VKApiObject
{
    NSNumber *_id;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSNumber *_latitude;	// 24 = 0x18
    NSNumber *_longitude;	// 32 = 0x20
    NSNumber *_created;	// 40 = 0x28
    NSString *_icon;	// 48 = 0x30
    NSNumber *_group_id;	// 56 = 0x38
    NSNumber *_group_photo;	// 64 = 0x40
    NSNumber *_checkins;	// 72 = 0x48
    NSNumber *_updated;	// 80 = 0x50
    NSNumber *_type;	// 88 = 0x58
    NSNumber *_country;	// 96 = 0x60
    NSString *_city;	// 104 = 0x68
    NSString *_address;	// 112 = 0x70
    NSNumber *_showmap;	// 120 = 0x78
}

@property(retain, nonatomic) NSNumber *showmap; // @synthesize showmap=_showmap;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSNumber *country; // @synthesize country=_country;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSNumber *checkins; // @synthesize checkins=_checkins;
@property(retain, nonatomic) NSNumber *group_photo; // @synthesize group_photo=_group_photo;
@property(retain, nonatomic) NSNumber *group_id; // @synthesize group_id=_group_id;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSNumber *created; // @synthesize created=_created;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;	// IMP=0x0000000100b51d0c

@end


#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol ASPFileResponse
@end

@interface ASPFileResponse : ASPObject


@property(nonatomic) NSString* name;

@property(nonatomic) NSString* path;

@property(nonatomic) NSString* modifiedDate;

@property(nonatomic) NSNumber* isFolder;

@property(nonatomic) NSNumber* size;

@end

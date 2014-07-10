#ifndef DGDOLLARTEST2ADDRESSVALIDATOR_H
#define DGDOLLARTEST2ADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator.
   Corrects near-miss characters and refuses characters that are not part of base58.
 */
class Dgdollartest2AddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit Dgdollartest2AddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // DGDOLLARTEST2ADDRESSVALIDATOR_H

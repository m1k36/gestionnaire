#include "controller.h"
#include <QMessageBox>

ControllerAdd::ControllerAdd(Data* data): data(data)
{}

void ControllerAdd::control(QString name, QDate dateArrivee, QDate dateDepart, int nbChien, int nbChat, int nbBoxChien, int nbBoxChat)
{
    Client* similar = data->isSimilar(name, dateArrivee, dateDepart);
    BlackClient* blackListed = data->isBlackListed(name);
    if(dateArrivee<=dateDepart && name!="" && similar==nullptr && blackListed==nullptr){
        data->addClient(name, dateArrivee, dateDepart, nbChien, nbChat, nbBoxChien, nbBoxChat);
        data->notifyObserver();
    }
    else if(name==""){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Information incorecte ou manquante");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
    else if(dateArrivee>dateDepart){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Les dates ne sont pas correcte");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
    else if(blackListed!=nullptr){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Black Liste");
        msgBox.setText("La personne fait partie des personnes blacks listées pour la raison suivante :\n\n"+blackListed->getName()+",\n"+blackListed->getDescription()+"\n\nVoulez-vous continuer ?");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);

        int answer = msgBox.exec();
        if (answer == QMessageBox::Yes) {
            data->addClient(name, dateArrivee, dateDepart, nbChien, nbChat, nbBoxChien, nbBoxChat);
            data->notifyObserver();
        }
    }
    else if(similar!=nullptr){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Confirmation");
        msgBox.setText("La réservation que vous essayer de rajouter est similaire à celle-ci :\n\n"+similar->getName()+" : "+similar->getDateArrivee().toString()+" / "+similar->getDateDepart().toString()+"\n\nVoulez-vous continuer ?");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);

        int answer = msgBox.exec();
        if (answer == QMessageBox::Yes) {
            data->addClient(name, dateArrivee, dateDepart, nbChien, nbChat, nbBoxChien, nbBoxChat);
            data->notifyObserver();
        }
    }
    else{
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Erreur lors de l'ajout !");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
}


ControllerModify::ControllerModify(Data * data): data(data)
{}

void ControllerModify::control(int id, QString name, QDate dateArrivee, QDate dateDepart, int nbChien, int nbChat, int nbBoxChien, int nbBoxChat)
{
    if(dateArrivee<=dateDepart && name!="" && id>=0){
        data->modifyClient(id, name, dateArrivee, dateDepart, nbChien, nbChat, nbBoxChien, nbBoxChat);
        data->notifyObserver();
    }
    else if(name==""){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Manque d'information");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
    else if(dateArrivee>dateDepart){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Les dates ne sont pas correcte");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
    else{
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Erreur lors de la modification !");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
}

ControllerRemove::ControllerRemove(Data *data): data(data)
{}

void ControllerRemove::control(int id)
{
    if(id>=0){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Warning");
        msgBox.setText("Êtes-vous sûr de vouloir retirer ce client ?");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int answer = msgBox.exec();

        if(answer == QMessageBox::Ok){
            data->removeClient(id);
        }

        data->notifyObserver();
    }
}

ControllerAddBlackClient::ControllerAddBlackClient(Data* data): data(data)
{}

void ControllerAddBlackClient::control(QString name, QString desc)
{
    if(name!=""){
        data->addBlackClient(name, desc);
        data->notifyObserver();
    }
    else if(name==""){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Information incorecte ou manquante");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
    else{
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Erreur lors de l'ajout !");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
}


ControllerModifyBlackClient::ControllerModifyBlackClient(Data * data): data(data)
{}

void ControllerModifyBlackClient::control(int id, QString name, QString desc)
{
    if(name!="" && id>=0){
        data->modifyBlackClient(id, name, desc);
        data->notifyObserver();
    }
    else if(name==""){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Manque d'information");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
    else{
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Erreur");
        msgBox.setText("Erreur lors de la modification !");
        msgBox.setIcon(QMessageBox::Information);
        msgBox.exec();
    }
}

ControllerRemoveBlackClient::ControllerRemoveBlackClient(Data *data): data(data)
{}

void ControllerRemoveBlackClient::control(int id)
{
    if(id>=0){
        QPixmap pixmap( 32, 32 );
        pixmap.fill( Qt::transparent );
        QMessageBox msgBox;
        msgBox.setWindowIcon(pixmap);
        msgBox.setWindowTitle("Warning");
        msgBox.setText("Êtes-vous sûr de vouloir retirer ce client de la black liste ?");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        int answer = msgBox.exec();

        if(answer == QMessageBox::Ok){
            data->removeBlackClient(id);
        }

        data->notifyObserver();
    }
}
